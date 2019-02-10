int jumpingOnClouds(int c_count, int* c) {
    int count = 0, jump = 0;;
    for(count = 0; count < c_count-1;){
        if(c[count] == 0 && c[count+2] == 0){
            ++jump;
            count = count+2; 
            continue;
        }
        if(c[count] == 0 && c[count+1]== 0){
            ++jump;
            ++count;
        }
    }
    return jump;

}
