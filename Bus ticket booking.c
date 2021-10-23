#include <stdio.h>

int main(){
    printf("======================================");
    printf("\nWELCOME TO INSTANT BUS STATION\n");
       printf("======================================\n");
int Distance,bus, Davao=500, Malaybalay=200, Cagayan=300,change,amount;
char choices;
printf("\nSelect your destination\n [1] Davao [2] Malaybalay [3] Cagayan ");
printf("\nChoice:");
scanf("%d", &Distance);
printf("\nSelect your preferred Bus\n [1] pabama [2] super V [3] rural ");
printf("\nChoice:");
scanf("%d", &bus);
switch(Distance){
case 1 :
    printf("San Jose to Davao");
    printf("\n Distance:250 km");
    printf("\n Funds:%d", Davao);
    if (bus == 1){
        printf("\n Bus: pabama");
    }
      if (bus == 2){
        printf("\n Bus: super V");
    }
      if (bus == 3){
        printf("\n Bus: rural");

    }
    break;
}
switch(Distance){
case 2 :
    printf("San Jose to Malaybalay");
    printf("\n Distance:7 km");
    printf("\n Funds:%d", Malaybalay);
    if (bus == 1){
        printf("\n Bus: pabama");
    }
      if (bus == 2){
        printf("\n Bus: super V");
    }
      if (bus == 3){
        printf("\n Bus: rural");

    }
    break;
}
switch(Distance){
case 3 :
    printf("San Jose to Cagayan");
    printf("\n Distance:120 km");
    printf("\n Funds:%d", Cagayan);
    if (bus == 1){
        printf("\n Bus: pabama");
    }
      if (bus == 2){
        printf("\n Bus: super V");
    }
      if (bus == 3){
        printf("\n Bus: rural");

    }
    break;

}

printf("\n Buy Ticket? Y/N:");
scanf(" %c", &choices);

if(choices == 'y' || choices == 'Y'){




printf("Enter Funds:");
scanf("%d", &amount);


if(amount < Davao || amount < Malaybalay || amount < Cagayan){
    printf("\nInsufficient Funds.");

}
else if (Distance == 1){
    change = amount- Davao;
    printf("change is:%d", change);
}
else if (Distance == 2){
    change = amount- Malaybalay;
    printf("change is:%d", change);
}

else if (Distance == 3){
    change = amount- Cagayan;
    printf("change is:%d", change);

}
}else{
    printf("Book Cancelled.");
}
printf("\n\n=============================");
printf("\n\nProgram by No Desire.\n");
printf("\n=============================");

return 0;

}
