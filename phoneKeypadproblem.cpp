#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string output, int index, vector<string>& ans, string mapping[10])
{
    if (index == digits.length()) // Fix: Change > to ==
    {
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

vector<string> letter(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
    {
        return ans;
    }
    int index = 0;
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main()
{    string digits = "23";
    vector<string> letters = letter(digits);

    // Step 4: Process or display the results
    cout << "Possible letter combinations:" << endl;
    for (int i = 0; i < letters.size(); i++)
    {
        cout << letters[i] << endl;
    }


    return 0; // Add return statement to indicate successful termination
}
