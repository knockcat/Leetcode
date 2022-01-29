// 1880. Check if Word Equals Summation of Two Words

class Solution
{
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {

        int num1 = 0, num2 = 0, num3 = 0;

        for (int i = 0; i < firstWord.length(); i++) // converting firstWord  to its numerical value ie. abc as 123
        {
            num1 = num1 * 10 + (firstWord[i] - 'a');
        }

        for (int i = 0; i < secondWord.length(); i++) // converting secondWord  to its numerical value
        {
            num2 = num2 * 10 + (secondWord[i] - 'a');
        }

        for (int i = 0; i < targetWord.length(); i++) // converting targetWord  to its numerical value
        {
            num3 = num3 * 10 + (targetWord[i] - 'a');
        }

        // cout<<firstWord<< " " << num1 << " " << secondWord << " " << num2 << endl;      // just for checking purpose

        int res = num1 + num2;

        // cout<<res << " " <<targetWord <<endl;

        if (res == num3)
            return true;

        return false;
    }
};
