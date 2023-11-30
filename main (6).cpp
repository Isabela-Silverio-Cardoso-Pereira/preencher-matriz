/******************************************************************************

Preencha uma matriz A nxm com (i + 5 ∗ j)%(i + j), sendo i e j as posições dos 
elementos em A. Em seguida imprima a matriz na tela.


*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
    int n = 3;
    int m = 3;
    
    int matriza[3][3];
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            matriza[i][j]= (i+5*j)%(n+m);
            
            cout << matriza[i][j] << " ";
        }
    }
    
    
    

  return 0;
}
