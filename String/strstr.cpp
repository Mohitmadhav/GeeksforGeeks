int strstr(string s, string x)
{
     //Your code here

     if(s.length()<x.length())
     return -1;

     int len1=s.length();
     int len2=x.length();

     for(int i=0;i<=len1-len2;i++)
     {
         if(s.substr(i,len2)==x)
         return i;
     }

     return -1;


}
