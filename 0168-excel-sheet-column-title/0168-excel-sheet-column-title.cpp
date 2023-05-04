class Solution
{
public:
    string convertToTitle(int number)
    {
        /*
            This function will generate string output
            based on the input 
            OUTPUT : COLUMN TITLE OF AN EXCEL SHEET
        */

        string theTitle = ""; 

        char charToAppend; 
        // what character to append in every iteration

        // we will reduce the number by the factor of 26
        // in every iteration
        while (number > 0)
        {
            // Why reduce the numbre by one?
            number--; 
            // Because we are adding to 'A' 
            // and 'A' is not ZERO, it is COLUMN 1
            // we take the input, reduce it by one every time and then add to 'A'

            charToAppend = 'A' + number % 26;

            // Appending from the left ** THIS IS IMPORANT ** 
            theTitle = charToAppend + theTitle;

            number = number / 26;
            // divide the number by 26 
            // to get to the other characters
        }

        return theTitle;
    }
};