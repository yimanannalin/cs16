#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

    struct Box b1;

    initBox(&b1,3.1413439,6.2831853071,3.42235424,6.32243214);
    assertEquals("ul=(3,6),w=3,h=6", boxToString(b1,1), "boxToString(b1,1)");
    assertEquals("ul=(3.1,6.3),w=3.4,h=6.3", boxToString(b1,2), "boxToString(b1,2)");
    assertEquals("ul=(3.14,6.28),w=3.42,h=6.32", boxToString(b1,3), "boxToString(b1,3)");
    assertEquals("ul=(3.141,6.283),w=3.422,h=6.322", boxToString(b1,4), "boxToString(b1,4)");
    assertEquals("ul=(3.1413,6.2832),w=3.4224,h=6.3224", boxToString(b1,5), "boxToString(b1,5)");
    assertEquals("ul=(3.14134,6.28319),w=3.42235,h=6.32243", boxToString(b1,6), "boxToString(b1,6)");
		   
  return 0;
}
