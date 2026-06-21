class Solution {
public:
    string intToRoman(int number) {
        string ones[] = {"",  "I",  "II",  "III",  "IV",
                         "V", "VI", "VII", "VIII", "IX"};
        string tens[] = {"",  "X",  "XX",  "XXX",  "XL",
                         "L", "LX", "LXX", "LXXX", "XC"};
        string hundrends[] = {"",  "C",  "CC",  "CCC",  "CD",
                              "D", "DC", "DCC", "DCCC", "CM"};
        string thousands[] = {"", "M", "MM", "MMM"};

        string result = thousands[number / 1000] +
                     hundrends[(number % 1000) / 100] +
                     tens[(number % 100) / 10] + ones[number % 10];

        return result;
    }
};