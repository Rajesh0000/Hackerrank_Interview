int sockMerchant(int n, int ar_count, int* ar) {

/*As maximum input we can give is 100*/
/*So color code is between 1 to 100*/
/*Let new array Index number be color code of sock*/
/*Dividing count by 2 give sock pair*/

    int i = 0, res =0, pair =0, result = 0;
    int temp[101] = {};
    for(i = 0; i < ar_count; i++)
        temp[ar[i]]++;
    
    for(i = 0; i < 101; i++)
        result += temp[i]/2;
    
    return result;
}
