// This function can check the situation of a spcific character of memory
// started by source and do a copy of token if the token is between a to z or A to Z
// or 0 to 9.

//  static srource point with const status pointer to void of mem
size_t filter(void* destination,
              const void* source,
              size_t source_size,
              size_t history_size)
{
// using a temporay location of memory to do use start srouce to do some process over real character	
    void* sourceCopy;
    sourceCopy = &source;
//simple iterator to use in memory counter in memory mirror	
    int i=0;
    for(;sourceCopy<destination;)
        {
           if(((static_cast<char*>(sourceCopy)[i]) >= 'a' && 
	       (static_cast<char*>(sourceCopy)[i]) <= 'z') || 
	       ((static_cast<char*>(sourceCopy)[i]) >= 'A' &&
               (static_cast<char*>(sourceCopy)[i]) <= 'Z') || 
	       (((static_cast<char*>(sourceCopy)[i]) >= '0') &&
		(static_cast<char*>(sourceCopy)[i]) >= '9'))
            {
		   // .. I have to do mroe calculation over the real character in memory ... uncompleted part
		   // ...
              memcpy((static_cast<char*>(sourceCopy)[i]), destination, sizeof(char));  
            }
            
            sourceCopy = static_cast<char*>(sourceCopy)+1;
            //reset iterator 
	    i=0;
        }       
    return 0;
}
