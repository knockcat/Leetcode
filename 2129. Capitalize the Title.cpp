// 2129. Capitalize the Title

class Solution {
public:
    string capitalizeTitle(string title) 
    {
        int i = 0;
        while(title[i] != '\0')             //converting all character to lower case till string doesn't become NULL
        {
            title[i] = tolower(title[i]);
            i++;
        }
            
        i = 0;                              //initializing i back to 0
        
        for(int i=0; title[i]!='\0'; i++)
	    {
		    if(i == 0 )                     //for first character
		    {
                if((title[i]>='a' && title[i]<='z' && title[i+1] != ' ' && title [i+2] != ' ' && title[i+1] != '\0' && title[i+2] != '\0' ))
				    title[i]=title[i]-32;   //converting to upper case and handling the edge case if first word length < 3
                
                
                continue;                   //skip the iteration
		    }
            
            if((title[i] == ' ') && (title[i + 1] != ' ' && title[i+2] != ' ' &&  title[i+1] != '\0' && title[i+2] != '\0' && title[i+3] != ' ' && title[i+3] != '\0' ))                                     //handling the edge case of word length < 3 and if last word is of 2 character and than i+3 == NULL
            {
                i++;                        //increment beacause i+1 character should be capatilize after finding space
                
			    if(title[i]>='a' && title[i]<='z')
			    {
				    title[i]=title[i]-32;   //converting to upper case
				    continue; 
			    }
            }
            
	    }
        
        
        return title;
    }
};