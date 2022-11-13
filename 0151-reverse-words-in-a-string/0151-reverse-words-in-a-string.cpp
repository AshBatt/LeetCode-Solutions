class Solution {
public:
    string reverseWords(string s) {
    string str;
    string string;
         reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
          
            if(s[i]==' ' && !str.empty())
            {
                reverse(str.begin(),str.end()); 
                 string=string+str;
                str.clear();
                string=string+' ';
            }
            if(s[i]!=' ')
            {
                str=str+s[i];
            }
      
        }
      if(!str.empty())
            {
                reverse(str.begin(),str.end()); 
                 string=string+str;
           string=string+' ';
                str.clear();
            }
        string.pop_back();
    return string;
    }
};