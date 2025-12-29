class Solution {
public:
    int bestClosingTime(string customers) {
        long long n = 0;
        
        long long count = 0;
        while (n < customers.size()) {

           
            if (customers[n] == 'Y')
                count++;

                n++;
        }
         long long ans = count ;
         long long hour=0;


        for (long long i = 0; i < customers.size(); i++) {
           

            if (customers[i] == 'Y')
                count--;
                else count++;

                if (count< ans){
                    ans=count;
                    hour =i+1;

                }

        }
       

      
        return hour;

}
}
;