class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        
        //int l=arr.length();
        
        //make a hashmap
        unordered_map<string,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        /*
        dereferencing a std::map iterator gives you a std::pair, you can then access its 
        elements with first and second. For example, (*it).first will give you the key and 
        (*it).second will give you the value. 
        These are equivalent to it->first and it->second.
        */
        
        // find the second largest occurrence
    int first_max = INT_MIN, sec_max = INT_MIN;
    
    
    //auto ke kaaran iterator ko peh;e declare karne ki jaroorat nhi
    
    //abhi pehle first max nikaalo
    for (auto it = m.begin(); it != m.end(); it++) 
    {
        if (it->second > first_max)  //it->second means map ki second value yaani frequency
        {
            first_max = it->second;
        }
        
    }
    //cout<<first_max;
    
    //ab second max nikaalo abhi pehle first max nikaalo
    for (auto it = m.begin(); it != m.end(); it++) 
    {
        //it->second means map ki second value yaani frequency
        if (it->second > sec_max && it->second!=first_max)  
        {
            sec_max = it->second;
        }
        
    }
    //cout<<sec_max;
 string ans=" ";
 
 // Return string with occurrence equals to sec_max
    for (auto it = m.begin(); it != m.end(); it++)
        if (it->second == sec_max)
        {
            ans=it->first;
        }
            
 
return ans;   
        
    }
};
