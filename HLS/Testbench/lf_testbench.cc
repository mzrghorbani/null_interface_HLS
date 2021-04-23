/**
 * Author by Maziar Ghorbani - Brunel University London
 * Test-bench for Class LR-HLS
 * Based on implementation of Linear-Regression algorithm by Dr Thomas Schuh
 */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "lf_top.h"
#include "lf_types.h"

void lf_top(x_strm &x0, y_strm &y0, z_strm &z0, l_strm &l0, x_strm &x1, y_strm &y1, z_strm &z1);

// Vector variables declarations to hold stub parameters form text.csv file
typedef std::vector<double> record_t;
typedef std::vector<record_t> data_t;

// Function to read stub parameters from text file
std::istream &operator>>(std::istream &ins, record_t &record) {
    record.clear();
    std::string line;
    getline(ins, line);
    std::stringstream ss(line);
    std::string field;
    while (getline(ss, field, ',')) {
        std::stringstream fs(field);
        double f;
        fs >> f;
        record.push_back(f);
    }
    return ins;
}

// Function to read stub parameters from text file
std::istream &operator>>(std::istream &ins, data_t &data) {
    data.clear();
    record_t record;
    while (ins >> record) {
        data.push_back(record);
    }
    return ins;
}

int main(int argc, char **argv) {

    data_t data;
    std::ifstream infile("input.txt");
    infile >> data;
    if (!infile.eof()) {
        std::cout << "ERROR: Can't open input.txt file\n";
        return -1;
    }
    infile.close();

    int i;

	x_strm x0;
	y_strm y0;
	z_strm z0;
	l_strm l0;
	x_strm x1;
	y_strm y1;
	z_strm z1;
	l_strm l1;

    for (i = 0; i < 16; i++) {
        x0.write(dt_x(data[i][0]));
        y0.write(dt_y(data[i][1]));
        z0.write(dt_z(data[i][2]));
        l0.write(dt_l(data[i][3]));
    }

    // Top function calling per clock-cycle
    lf_top(x0, y0, z0, l0, x1, y1, z1, l1);

    // Adding values to result.golden.dat file
    FILE *fp;
	fp = fopen("result.dat", "w");

    for(i = 0; i < 16; i++) {
		fprintf(fp, "%f, %f, %f, %d\n", x1.read().to_double(),
										y1.read().to_double(),
										z1.read().to_double(),
										l1.read().to_int());
    }

    fclose(fp);

    // Activate comparison after fixed-point design is completed
    printf("Comparing against output data \n");

    if (system("diff --brief -w result.dat output.txt")) {
        fprintf(stdout, "*********************************************\n");
        fprintf(stdout, "FAIL: Output DOES NOT match the golden output\n");
        fprintf(stdout, "*********************************************\n");
        return 1;
    } else {
        fprintf(stdout, "*******************************************\n");
        fprintf(stdout, "PASS: The output matches the golden output!\n");
        fprintf(stdout, "*******************************************\n");
        return 0;
    }

// If COSIM fails, uncomment line below;
//    return 0;
}
