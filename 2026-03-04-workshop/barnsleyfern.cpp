// https://en.wikipedia.org/wiki/Barnsley_fern?useskin=vector
// https://www.algorithm-archive.org/contents/barnsley/barnsley.html
// https://www.algorithm-archive.org/contents/IFS/IFS.html

#include <print>
#include <string>
#include <random>

void barnsleyfern(int npoints);

int main(int argc, char **argv) {
	const int N = std::stoi(argv[1]);

	barnsleyfern(N);

	return 0;
}

void barnsleyfern(int npoints) {
	const int SEED = 2;
	std::mt19937 gen(SEED);
    std::uniform_real_distribution<> dis(0.0, 1.0);

    double x{0.0}, y{0.0};
    std::println("{:.16e} {:.16e}", x, y);
	for (int ii = 0; ii < npoints; ++ii) {
		double r = dis(gen);
		if (r < 0.1) {
			x = 0.00 * x + 0.00 * y;
            y = 0.00 * x + 0.16 * y;
		} else if (r < 0.86) {
			x =  0.85 * x + 0.04 * y + 0.00;
			y = -0.04 * x + 0.85 * y + 1.60;
		} else if (r < 0.93) {
			x = 0.20 * x - 0.26 * y + 0.00;
			y = 0.23 * x + 0.22 * y + 1.60;
		} else {
			x = -0.15 * x + 0.28 * y + 0.00;
			y =  0.26 * x + 0.24 * y + 0.44;
		}
		std::println("{:.16e} {:.16e}", x, y);
	}
}
