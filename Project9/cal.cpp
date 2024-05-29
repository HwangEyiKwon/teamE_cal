// getSum(a, b)
// getGop(a, b)
// getZegop(a)
// getMinus(a, b)
// getDivide(a, b) - hyeokseo.joo
// getSumSum(a, b, c)

class Cal {
public:
    int getSum(int numA, int numB) {
        return numA + numB;
    }
    int getGop(int numA, int numB) {
        return numA * numB;
    }
    int getZegop(int a) {
      return a * a;
    }
    int getSumSum(int numA, int numB, int numC) {
        return numA + numB + numC;
    }
    int getDivide(int a, int b) {
        if (b == 0) return -1;
        return (int)a / b;
    }
};
