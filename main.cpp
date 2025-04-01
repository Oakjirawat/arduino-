
#include <iostream>

int main() {
  std::string input; 
  std::string gs="";

 		std::string buffer="";
 		std::string final="";
 		std::cin >> input;
 			for(int i=0;i<=input.length();i++){
 				if(buffer[0]!=input[i]){
					buffer=input[i];
						if(!(gs.empty())){
							final.append(std::to_string(gs.length()));
							final.append(std::string(1,gs[0]));
							gs="";
						}
				}
			if(i==input.length()){
				break;
				}
		if(buffer[0]==input[i]){
				gs.append(buffer);
				}
		}
std::cout << final;



return 0;
}
