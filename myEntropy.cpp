//This version works...latest as at 20191113, 10.20 PM
#include <stdio.h>
#include <conio.h>
#include <math.h> // log2()
#include <stdlib.h> // exit()

int main()
{	
	char file_name[15];
	FILE *entropy_file;
	// use unsigned char so that can make comparison 
	// e.g. if (c!=0xA) .. comparing to Hex value
	// char c;
	unsigned char c=0;
	int flag=0;
	unsigned char chars[256];
	double entropy=0.0;
	int count[256];
	float percentage[256];
    int totalCount=0;
	long int line=0L; 
	int i=0;

	printf("Enter the filename to be opened: ");
    scanf("%s", file_name); 
    char filename[] = { "%s" }; 
    
	// if file cannot open
	if ((entropy_file = fopen(file_name,"rb"))==NULL)
	{
		printf("File cannot be opened");
		exit(0);
	}

	printf("\n");

	// initialization
	for (i=0;i<256;i++)
	{
		percentage[i]=0.0;
		count[i]=0;
		chars[i]=i;
	}
	//Read from input file
	//while (!feof(entropy_file)) // if NOT end of file
	while ((flag=fgetc(entropy_file))!=EOF) //EOF return NEGATIVE VALUE; it is not in the ASCII table
	{
		//c=fgetc(entropy_file);
		c=flag;
		//r.c=fread(&r, sizeof(struct rec), 1, entropy_file);
//		if (r.c!=0xA) // if c is not <ENTER> or 0xA
//		{
			line++;
			if (line%10==0)
				printf("\n");
				printf("[%c|%X]", c, c);

			// better use integer (74) than hex (0x4A) for J for 
			// easy indexing in count ... count[74] is for A
			// ... count[4A] is invalid
			switch (c)
			{
				case 0:  count[0]++; // A						
							break;
				case 1:  count[1]++; 
							break;
				case 2:  count[2]++; 
							break;
				case 3:  count[3]++; 
							break;
				case 4:  count[4]++; 
							break;
				case 5:  count[5]++; 
							break;
				case 6:  count[6]++; 
							break;
				case 7:  count[7]++; //H
							break;	
				case 8:  count[8]++; 
							break;
				case 9:  count[9]++; 
							break;
				case 10:  count[10]++; 
							break;
				case 11:  count[11]++; 
							break;
				case 12:  count[12]++; 
							break;
				case 13:  count[13]++; 
							break;
				case 14:  count[14]++; 
							break;
				case 15:  count[15]++; 
							break;
				case 16:  count[16]++; 
							break;
				case 17:  count[17]++; 
							break;
				case 18:  count[18]++; 
							break;
				case 19:  count[19]++; 
							break;
				case 20:  count[20]++; 
							break;
				case 21:  count[21]++; 
							break;
				case 22:  count[22]++; 
							break;	
				case 23:  count[23]++; 
							break;
				case 24:  count[24]++; 
							break;	
				case 25:  count[25]++; 
							break;	
				case 26:  count[26]++; // A						
							break;
				case 27:  count[27]++; 
							break;
				case 28:  count[28]++; 
							break;
				case 29:  count[29]++; 
							break;
				case 30:  count[30]++; 
							break;
				case 31:  count[31]++; 
							break;
				case 32:  count[32]++; 
							break;
				case 33:  count[33]++; //H
							break;	
				case 34:  count[34]++; 
							break;
				case 35:  count[35]++; 
							break;
				case 36:  count[36]++; 
							break;
				case 37:  count[37]++; 
							break;
				case 38:  count[38]++; 
							break;
				case 39:  count[39]++; 
							break;
				case 40:  count[40]++; 
							break;
				case 41:  count[41]++; 
							break;
				case 42:  count[42]++; 
							break;
				case 43:  count[43]++; 
							break;
				case 44:  count[44]++; 
							break;
				case 45:  count[45]++; 
							break;
				case 46:  count[46]++; 
							break;
				case 47:  count[47]++; 
							break;
				case 48:  count[48]++; 
							break;	
				case 49:  count[49]++; 
							break;
				case 50:  count[50]++; 
							break;	
				case 51:  count[51]++; 
							break;														
				case 52:  count[52]++; // A						
							break;
				case 53:  count[53]++; 
							break;
				case 54:  count[54]++; 
							break;
				case 55:  count[55]++; 
							break;
				case 56:  count[56]++; 
							break;
				case 57:  count[57]++; 
							break;
				case 58:  count[58]++; 
							break;
				case 59:  count[59]++; //H
							break;	
				case 60:  count[60]++; 
							break;
				case 61:  count[61]++; 
							break;
				case 62:  count[62]++; 
							break;
				case 63:  count[63]++; 
							break;
				case 64:  count[64]++; 
							break;
				case 65:  count[65]++; 
							break;
				case 66:  count[66]++; 
							break;
				case 67:  count[67]++; 
							break;
				case 68:  count[68]++; 
							break;
				case 69:  count[69]++; 
							break;
				case 70:  count[70]++; 
							break;
				case 71:  count[71]++; 
							break;
				case 72:  count[72]++; 
							break;
				case 73:  count[73]++;
							break;							
				case 74:  count[74]++; 
							break;
				case 75:  count[75]++; 
							break;
				case 76:  count[76]++; 
							break;
				case 77:  count[77]++; 
							break;
				case 78:  count[78]++; 
							break;
				case 79:  count[79]++; 
							break;
				case 80:  count[80]++; 
							break;
				case 81:  count[81]++; 
							break;
				case 82:  count[82]++; 
							break;
				case 83:  count[83]++; 
							break;
				case 84:  count[84]++; 
							break;
				case 85:  count[85]++; 
							break;
				case 86:  count[86]++; 
							break;
				case 87:  count[87]++; 
							break;	
				case 88:  count[88]++; 
							break;
				case 89:  count[89]++; 
							break;	
				case 90:  count[90]++; //Z
							break;
				case 91:  count[91]++; // A						
							break;
				case 92:  count[92]++; 
							break;
				case 93:  count[93]++; 
							break;
				case 94:  count[94]++; 
							break;
				case 95:  count[95]++; 
							break;
				case 96:  count[96]++; 
							break;
				case 97:  count[97]++; 
							break;
				case 98:  count[98]++; //H
							break;	
				case 99:  count[99]++; 
							break;
				case 100:  count[100]++; 
							break;
				case 101:  count[101]++; 
							break;
				case 102:  count[102]++; 
							break;
				case 103:  count[103]++; 
							break;
				case 104:  count[104]++; 
							break;
				case 105:  count[105]++; 
							break;
				case 106:  count[106]++; 
							break;
				case 107:  count[107]++; 
							break;
				case 108:  count[108]++; 
							break;
				case 109:  count[109]++; 
							break;
				case 110:  count[110]++; 
							break;
				case 111:  count[111]++; 
							break;
				case 112:  count[112]++;
							break;							
				case 113:  count[113]++; 
							break;
				case 114:  count[114]++; 
							break;
				case 115:  count[115]++; 
							break;
				case 116:  count[116]++; 
							break;
				case 117:  count[117]++; 
							break;
				case 118:  count[118]++; 
							break;
				case 119:  count[119]++; 
							break;
				case 120:  count[120]++; 
							break;
				case 121:  count[121]++; 
							break;
				case 122:  count[122]++; 
							break;
				case 123:  count[123]++; 
							break;
				case 124:  count[124]++; 
							break;
				case 125:  count[125]++; 
							break;
				case 126:  count[126]++; 
							break;	
				case 127:  count[127]++; 
							break;
				case 128:  count[128]++; 
							break;
				case 129:  count[129]++; // A						
							break;
				case 130:  count[130]++; 
							break;
				case 131:  count[131]++; 
							break;
				case 132:  count[132]++; 
							break;
				case 133:  count[133]++; 
							break;
				case 134:  count[134]++; 
							break;
				case 135:  count[135]++; 
							break;
				case 136:  count[136]++; //H
							break;	
				case 137:  count[137]++; 
							break;
				case 138:  count[138]++; 
							break;
				case 139:  count[139]++; 
							break;
				case 140:  count[140]++; 
							break;
				case 141:  count[141]++; 
							break;
				case 142:  count[142]++; 
							break;
				case 143:  count[143]++; 
							break;
				case 144:  count[144]++; 
							break;
				case 145:  count[145]++; 
							break;
				case 146:  count[146]++; 
							break;
				case 147:  count[147]++; 
							break;
				case 148:  count[148]++; 
							break;
				case 149:  count[149]++; 
							break;
				case 150:  count[150]++;
							break;							
				case 151:  count[151]++; 
							break;
				case 152:  count[152]++; 
							break;
				case 153:  count[153]++; 
							break;
				case 154:  count[154]++; 
							break;
				case 155:  count[155]++; 
							break;
				case 156:  count[156]++; 
							break;
				case 157:  count[157]++; 
							break;
				case 158:  count[158]++; 
							break;
				case 159:  count[159]++; 
							break;
				case 160:  count[160]++; 
							break;
				case 161:  count[161]++; 
							break;
				case 162:  count[162]++; 
							break;
				case 163:  count[163]++; 
							break;
				case 164:  count[164]++; 
							break;	
				case 165:  count[165]++; 
							break;
				case 166:  count[166]++; 
							break;
				case 167:  count[167]++; // A						
							break;
				case 168:  count[168]++; 
							break;
				case 169:  count[169]++; 
							break;
				case 170:  count[170]++; 
							break;
				case 171:  count[171]++; 
							break;
				case 172:  count[172]++; 
							break;
				case 173:  count[173]++; 
							break;
				case 174:  count[174]++; //H
							break;	
				case 175:  count[175]++; 
							break;
				case 176:  count[176]++; 
							break;
				case 177:  count[177]++; 
							break;
				case 178:  count[178]++; 
							break;
				case 179:  count[179]++; 
							break;
				case 180:  count[180]++; 
							break;
				case 181:  count[181]++; 
							break;
				case 182:  count[182]++; 
							break;
				case 183:  count[183]++; 
							break;
				case 184:  count[184]++; 
							break;
				case 185:  count[185]++; 
							break;
				case 186:  count[186]++; 
							break;
				case 187:  count[187]++; 
							break;
				case 188:  count[188]++;
							break;							
				case 189:  count[189]++; 
							break;
				case 190:  count[190]++; 
							break;
				case 191:  count[191]++; 
							break;
				case 192:  count[192]++; 
							break;
				case 193:  count[193]++; 
							break;
				case 194:  count[194]++; 
							break;
				case 195:  count[195]++; 
							break;
				case 196:  count[196]++; 
							break;
				case 197:  count[197]++; 
							break;
				case 198:  count[198]++; 
							break;
				case 199:  count[199]++; 
							break;
				case 200:  count[200]++; 
							break;
				case 201:  count[201]++; 
							break;
				case 202:  count[202]++; 
							break;	
				case 203:  count[203]++; 
							break;
				case 204:  count[204]++; 
							break;
				case 205:  count[205]++; // A						
							break;
				case 206:  count[206]++; 
							break;
				case 207:  count[207]++; 
							break;
				case 208:  count[208]++; 
							break;
				case 209:  count[209]++; 
							break;
				case 210:  count[210]++; 
							break;
				case 211:  count[211]++; 
							break;
				case 212:  count[212]++; //H
							break;	
				case 213:  count[213]++; 
							break;
				case 214:  count[214]++; 
							break;
				case 215:  count[215]++; 
							break;
				case 216:  count[216]++; 
							break;
				case 217:  count[217]++; 
							break;
				case 218:  count[218]++; 
							break;
				case 219:  count[219]++; 
							break;
				case 220:  count[220]++; 
							break;
				case 221:  count[221]++; 
							break;
				case 222:  count[222]++; 
							break;
				case 223:  count[223]++; 
							break;
				case 224:  count[224]++; 
							break;
				case 225:  count[225]++; 
							break;
				case 226:  count[226]++;
							break;							
				case 227:  count[227]++; 
							break;
				case 228:  count[228]++; 
							break;
				case 229:  count[229]++; 
							break;
				case 230:  count[230]++; 
							break;
				case 231:  count[231]++; 
							break;
				case 232:  count[232]++; 
							break;
				case 233:  count[233]++; 
							break;
				case 234:  count[234]++; 
							break;
				case 235:  count[235]++; 
							break;
				case 236:  count[236]++; 
							break;
				case 237:  count[237]++; 
							break;
				case 238:  count[238]++; 
							break;
				case 239:  count[239]++; 
							break;
				case 240:  count[240]++; 
							break;	
				case 241:  count[241]++; 
							break;
				case 242:  count[242]++; 
							break;
				case 243:  count[243]++; 
							break;	
				case 244:  count[244]++; 
							break;
				case 245:  count[245]++; 
							break;
				case 246:  count[246]++; 
							break;	
				case 247:  count[247]++; 
							break;
				case 248:  count[248]++; 
							break;
				case 249:  count[249]++; 
							break;	
				case 250:  count[250]++; 
							break;
				case 251:  count[251]++; 
							break;
				case 252:  count[252]++; 
							break;	
				case 253:  count[253]++; 
							break;
				case 254:  count[254]++; 
							break;
				case 255:  count[255]++; 
							break;																																																																											
				default : 	break;
			}
		}
//	}
	// ASCII Letters A=65=0x41, Z=90=0x5A, a=97=0x61, z=122=0x7A, 
	//       Numbers 0=48=0x30, 9=57=0x39

	//find total number of characters
	for (i=0;i<256;i++)
		totalCount = totalCount + count[i];

	// find percentage of each character
	for (i=0;i<256;i++) 
		if (count[i]>0) 
			percentage[i]= (float)count[i]/(float)totalCount; 

	//Display result
	printf("\n\nCharacter\tASCII\t\tHEX\t\tFrequency\tPercentage\n"); 	
	for (i=0;i<256;i++)
	{ 
		if (count[i]>0) 
			printf("   %c\t\t%d\t\t%X\t\t%d\t\t%.6f\n", chars[i], chars[i], chars[i], count[i],percentage[i]); 				
	} 
	printf("   \t\t\t\t\t\t[%d]", totalCount);				
	printf("\n\nTotal Characters = %d", totalCount);
	
	// ENTROPY
	for (i=0;i<256;i++) 
		if (percentage[i]>0)
			entropy = entropy + (-(percentage[i]*(log2(percentage[i])))); 
	printf("\n\nENTROPY = %.4lf\n\n", entropy);
	//printf("\nchar = %c = %d", 0x41, 0x41); //0x41 hex is displayed as A
	
	printf("\npress any key to continue ...");
	getch();
		
	fclose(entropy_file);

	return(0);
}
