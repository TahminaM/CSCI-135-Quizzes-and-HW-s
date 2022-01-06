
// Name: Tahmina Akther Munni
// Course: CSCI 135
// Instructor: Tong Yi
//Lab quiz 10: Checker board image


{
    if(row%2==0)
{
    if(col%2==0){
        out[row][col]=0;
    }
    else{
         out[row][col]=img[row][col];
    }}
else{
        if(col%2==0){
         out[row][col]=img[row][col];   
        }
        else{
           out[row][col]=0; 
        }
}
}