class Solution {
public:
    string largestGoodInteger(string num) {
        int count = 1;
        int ans = -1;
        int first=0;
        while(first <num.size()-2){
            if (num[first]==num[first+1]&&num[first+1]==num[first+2]){
            int value=num[first]-'0';
            ans=max(value,ans);

        }
        first++;
       
        }
        string final="";
        if (ans!=-1){
            final +=ans+'0';
            final +=ans+'0';
            final +=ans+'0';
        }
        return final;
    }
};