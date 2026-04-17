class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";

        int m = num1.size();
        int n = num2.size();
        vector<int> resultant(m + n, 0);

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int prod = (num1[i] - '0') * (num2[j] - '0');
                int sum = prod + resultant[i + j + 1];
                resultant[i + j + 1] = sum % 10;
                resultant[i + j] += sum / 10;
            }
        }
        string answer = "";
        for (int x : resultant) {
            if (!(answer.empty() && x == 0)) {
                answer.push_back(x + '0');
            }
        }
        if (answer == "")
            return "0";
        return answer;
    }
};