#include <bits/stdc++.h>
using namespace std;
string permuteString(string key,int* parity_table, int n){
    string result = "";
    for(int i=0;i<n;i++){
        result += key[parity_table[i]-1];
    }
    return result;
}




int main() {
	char hex[17], bin[65] = "";
    int i = 0;

    /* Input hexadecimal number from user */
    printf("Enter any hexadecimal number: ");
    scanf("%s",hex);

    /* Extract first digit and find binary of each hex digit */
    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'a':
            case 'A':
                strcat(bin, "1010");
                break;
            case 'b':
            case 'B':
                strcat(bin, "1011");
                break;
            case 'c':
            case 'C':
                strcat(bin, "1100");
                break;
            case 'd':
            case 'D':
                strcat(bin, "1101");
                break;
            case 'e':
            case 'E':
                strcat(bin, "1110");
                break;
            case 'f':
            case 'F':
                strcat(bin, "1111");
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
    }

    //printf("Hexademial number = %s\n", hex);
    //printf("Binary number = %s", bin);


	int initial_permutation[64]=  
    {   58,50,42,34,26,18,10,2, 
        60,52,44,36,28,20,12,4, 
        62,54,46,38,30,22,14,6, 
        64,56,48,40,32,24,16,8, 
        57,49,41,33,25,17,9,1, 
        59,51,43,35,27,19,11,3, 
        61,53,45,37,29,21,13,5, 
        63,55,47,39,31,23,15,7 
	};
	string plaintext = bin;
	plaintext=permuteString(plaintext,initial_permutation,64);
	cout<<plaintext;
}