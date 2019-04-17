#include "command.h"
#include "coder.h"


int main() {
    FILE *fp,*fp1;
    fp = fopen("Uncompressed.dat", "a");
    fp1 =  fopen("Compressed.dat", "a");
    
    for(int i = 0; i < 1000000; i++){
        unit32_t nubers = generate_number();
        fprintf(fp, "%d", nubers);
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}
