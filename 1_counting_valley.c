int countingValleys(int n, char* s) {
    long ground = 0, refrence = 0, valley = 0;
    long i =0;
    int belowsea = 0;
    for(i = 0; i < n; i++){
        if(s[i] == 'U')
            ++refrence;
        else
            --refrence;
            /*If he was on ground and than go downside-------Its valley
            * If he go downside and was not on ground(sea level) than Its not new valley*/
        if(ground == 0 && refrence < 0){
            valley++;
            ground = 1;
        }   
        if(refrence >= 0)
            ground = 0;
    }
    return valley;
}
