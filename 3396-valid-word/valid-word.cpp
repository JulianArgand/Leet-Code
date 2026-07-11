class Solution {
public:
    bool isValid(string word) {

        if (word.length() < 3)
        {
            return false;
        }

        int i = 0;
        bool vowel = false;
        bool consonant = false;

        while (word[i] != '\0')
        {
        
            if (!(word[i] >= 'a' && word[i] <= 'z') &&
                !(word[i] >= 'A' && word[i] <= 'Z') &&
                !(word[i] >= '0' && word[i] <= '9'))
            {
                return false;
            }

           
            if ((word[i] >= 'a' && word[i] <= 'z') ||
                (word[i] >= 'A' && word[i] <= 'Z'))
            {
                if (word[i] == 'a' || word[i] == 'A' ||
                    word[i] == 'e' || word[i] == 'E' ||
                    word[i] == 'i' || word[i] == 'I' ||
                    word[i] == 'o' || word[i] == 'O' ||
                    word[i] == 'u' || word[i] == 'U')
                {
                    vowel = true;
                }
                else
                {
                    consonant = true;
                }
            }

            i++;
        }

        return vowel && consonant;
    }
};