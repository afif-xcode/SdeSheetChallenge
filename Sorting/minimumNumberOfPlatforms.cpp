int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here - code by Afif Islam.
    // sort both the given arrays.
    sort(at,at+n);
    sort(dt,dt+n);
    // initially we need one platform for fiirst train. and result will be one(initially).
    int plat_needed=1, result = 1;
    int i = 1,j =0; // i is arrival index j is departure index ( i = 1, j=0 means 1st train is arrived but not departed )
    
    // when any of the platform is on platform
    while(i<n&&j<n){
     // if arrtival time of other train is lesser than departure time of current train 
        if(at[i]<=dt[j]){
            plat_needed++; // we will need another platform for arrival of new train
            i++;
        }
    // if arrtival time of other train is greater than departure time of current train    
        else if (at[i]>dt[j]){
            plat_needed--;  // we will get one platform empty
            j++;
        }
        
        // store the no. of maximum no. of platforms needed to result
        if(plat_needed>result){
            result = plat_needed;
        }
        
    }
    //return the result which is having maximum no. of platforms needed for all trains at any given point in time 
    return result;
}