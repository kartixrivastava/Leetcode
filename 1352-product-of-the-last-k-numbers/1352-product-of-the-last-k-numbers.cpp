class ProductOfNumbers {
    vector<int> a = {1};

public:
    ProductOfNumbers() {}

    void add(int num) {
        if (num == 0)
            a = {1};
        else
            a.push_back(a.back() * num);
    }

    int getProduct(int k) {
        int n = a.size();
        if (k >= n)
            return 0;
        return a[n - 1] / a[n - k - 1];
    }
};