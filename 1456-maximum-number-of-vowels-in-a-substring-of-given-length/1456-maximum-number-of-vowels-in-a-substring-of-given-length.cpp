class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'){
            count++;}
        }
        int ansmax = count;
        for(int i=k;i<s.length();i++){
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'){
                count++;
             }
               if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='e'||s[i-k]=='o'||s[i-k]=='u'){
                count--;
             }
             if(count>ansmax){
                ansmax=count;
             }
        }
        return ansmax;}
};