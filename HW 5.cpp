/*Write in C++ a function  void AddEvenParity( unsigned int & data )  that modifies the supplied data variable the following way:
 
 Make 31st bit of data equal to 0 or 1 to ensure that the total number of 1’s in the binary representation of data is even.
 You are not allowed to use C++ bitset class in the function AddEvenParity or any helper functions called directly or indirectly from it. You can, however, use bitset in the function main for convenient printing in binary form (see the example below).

   Example 1:

 unsigned int  useful = 0b1011;
 AddEvenParity( useful );
 std::cout<< std::bitset<32>( useful ) <<std::endl;

 the output should be 10000000000000000000000000001011 . Pay attention to the leftmost digit 1. It was added by AddEvenParity to make the number of 1’s even (in this case, 4).

 Example 2:

 unsigned int  useful = 0b11011;
 AddEvenParity( useful );
 std::cout<< std::bitset<32>( useful ) <<std::endl;

 the output should be 00000000000000000000000000011011 . The leftmost digit is 0 since the number of 1’s was even from the very start.
 
 
 EXTRA

 BLUE 16

 GREEN 8

 RED  0


  */



unsigned int Dim(unsigned int originalColor, int dimRatio){     //Dim function takes originalColor and reduces red,
                                                                 //green and blue components in it dimRatio times
    
    unsigned red_mask = 0x000000FF;                             // creating red mask
    unsigned green_mask = 0x0000FF00;                           // creating green mask
    unsigned blue_mask= 0x00FF0000;                            // creating blue mask
    unsigned extra_mask=0xFF000000;
    
    unsigned red = (originalColor & redMask)/dimRatio;
    
    unsigned green = ((originalColor & greenMask)>>8)/dimRatio;
    
    unsigned blue=((originalColor & blueMask)>>16)/dimRatio;
    
    unsigned extra = originalColor & extraMask;
    
    
    originalColor = extra;                                   // extra component reamain unchanged
    originalColor = (blue << 16) | originalColor;
    originalColor = (green<<8) | originalColor;
    originalColor = red | originalColor;
    return originalColor;

}
