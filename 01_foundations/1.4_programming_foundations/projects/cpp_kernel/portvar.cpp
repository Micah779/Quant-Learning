
#include <vector>
extern "C" {
    // Compute w^T Sigma w where Sigma is row-major n x n, w length n
    double port_var(const double* w, const double* Sigma, int n) {
        // temp = Sigma * w
        std::vector<double> temp(n, 0.0);
        for (int i = 0; i < n; ++i) {
            const double* row = Sigma + i*n;
            double acc = 0.0;
            for (int j = 0; j < n; ++j) acc += row[j] * w[j];
            temp[i] = acc;
        }
        // return w^T temp
        double out = 0.0;
        for (int i = 0; i < n; ++i) out += w[i] * temp[i];
        return out;
    }
}
