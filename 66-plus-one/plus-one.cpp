class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();

        for(int i=n-1;i>=0;i--)//last se chalu krenge
        {
            if(digits[i]<9)
            {
                digits[i]++; //simply usme ek add krdo ex- 2 h to +1 krdo ie =3;
                return digits;
            }
            //or 9 ke equal h to use 0 bna do
            digits[i]=0;
        }
        // ab agr sare 999 hogaye to us "array" ke samne "1" lga denge;
        digits.insert(digits.begin(),1);
        return digits;

    }
};