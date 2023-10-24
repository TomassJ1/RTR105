#include "foo.h"
#include <stdio.h>

int main(void)
{
    int id_main = 42;
    printf("id_main atrašanās vietas atmiņā (izdruka no main): %p\n",&id_main);
    printf("id_main vērtība pirms foo funkcijas izpildes: %d\n",id_main);
    
    char name_main[] = "mans teksts";
    printf("name_main atrašanās vietas atmiņā (izdruka no main): %p\n",&name_main);
    printf("name_main vērtība pirms foo funkcijas izpildes: %s\n",name_main);

    name_main[0] = 65;
    foo(id_main, name_main);
    printf("\nid_main vērtība pēc foo funkcijas izpildes: %d\n",id_main);
    printf("name_main vērtība pēc foo funkcijas izpildes): %s\n",name_main);

    return 0;

}
