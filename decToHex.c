/*
The MIT License (MIT)

Copyright (c) 2014 blu3b0lt

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

int toHex(char hexNum[], int decNum) {
	int temp;
	//puts("break");
	int i = 0;
	for(i=0;i<6;i++) {
			hexNum[i] = '\0';
	}
	//puts(hexNum);
	//puts("Done");
	char ctr;
	i = 0;
    while(decNum!=0) {
        temp = decNum % 16;

      //To convert integer into character
        if(temp > 9)
    		ctr = (char)(temp + 55);
    	else 
    		ctr = (char)(temp + 48);
    	hexNum[i++]= ctr;
    	decNum = decNum / 16;
  	}
  	/*
  	#if you use gcc then strrev present in string.h won't work, use strrev present in this repo.
  	*/	
  	hexNum = strrev(hexNum);  
	return 0;
}