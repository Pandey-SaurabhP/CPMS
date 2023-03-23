#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


#define fileName "parked_cars.txt"

const char car[20] = "car  ";
const char truck[20] = "truck";
const char bike[20] = "bike ";

void clear(){
    system("clear");
}

struct vehicle{
    int id;

    char registeredName[20];
    char licensePlate[20];

    char vehicleType[20];

};

struct parkingLot{

    int countParked;

    struct vehicle parkedVehicles[100];

    parkingLot(){
        this -> countParked = 0;
    }
};

struct design{

    void jiit(){

        printf("   .----------------. .----------------. .----------------. .----------------. \n");
        printf("  | .--------------. | .--------------. | .--------------. | .--------------. |\n");
        printf("  | |     _____    | | |     _____    | | |     _____    | | |  _________   | |\n");
        printf("  | |    |_   _|   | | |    |_   _|   | | |    |_   _|   | | | |  _   _  |  | |\n");
        printf("  | |      | |     | | |      | |     | | |      | |     | | | |_/ | | \\_|  | |\n");
        printf("  | |   _  | |     | | |      | |     | | |      | |     | | |     | |      | |\n");
        printf("  | |  | |_' |     | | |     _| |_    | | |     _| |_    | | |    _| |_     | |\n");
        printf("  | |  `.___.'     | | |    |_____|   | | |    |_____|   | | |   |_____|    | |\n");
        printf("  | |              | | |              | | |              | | |              | |\n");
        printf("  | '--------------' | '--------------' | '--------------' | '--------------' |\n");
        printf("   '----------------' '----------------' '----------------' '----------------' \n");

    }


    void cpms(){

        printf("  .----------------. .----------------. .----------------. .----------------.  \n");
        printf("  | .--------------. | .--------------. | .--------------. | .--------------. |\n");
        printf("  | |     ______   | | |   ______     | | | ____    ____ | | |    _______   | |\n");
        printf("  | |   .' ___  |  | | |  |_   __ \\   | | ||_   \\  /   _|| | |   /  ___  |  | |\n");
        printf("  | |  / .'   \\_|  | | |    | |__) |  | | |  |   \\/   |  | | |  |  (__ \\_|  | |\n");
        printf("  | |  | |         | | |    |  ___/   | | |  | |\\  /| |  | | |   '.___`-.   | |\n");
        printf("  | |  \\ `.___.'\\  | | |   _| |_      | | | _| |_\\/_| |_ | | |  |`\\____) |  | |\n");
        printf("  | |   `._____.'  | | |  |_____|     | | ||_____||_____|| | |  |_______.'  | |\n");
        printf("  | |              | | |              | | |              | | |              | |\n");
        printf("  | '--------------' | '--------------' | '--------------' | '--------------' |\n");
        printf("  '----------------' '----------------' '----------------' '----------------'  \n");


        printf("\t\t\tCar Parking Management System\n");

    }

    void line(){

        printf("-------------------------------------------------------------------------------\n");

    }

    void hand(){

            printf("                    ⡖⠉⢆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀        \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⡤⣄⠀⠀⠀⠀⠀⢰⠀⠀⢸⠀⠀⠀⡸⠉⢣⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⢸⡀⠈⢧⠀⠀⠀⠀⢸⣀⣀⢸⠀⠀⠀⠇⠀⢸⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠸⡇⠀⢈⡆⠀⠀⠀⢸⠀⠀⠸⠀⠀⢸⠠⠄⡘⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⢻⠉⠀⠱⠀⠀⠀⡆⢀⡀⣄⠀⠀⡆⠀⠀⠇⠀⠀⠀⡔⢢       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠸⡆⠀⣀⢇⠀⠀⡇⠉⠙⢹⠀⠘⠰⠦⢼⠀⠀⠀⡰⠀⢰       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡉⠁⠈⠆⠀⡇⠀⠀⢸⠀⡇⠀⠀⠸⠀⠀⡰⠁⢂⠄        ____  _  _  ____             \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⠀⠀⠘⣄⡇⢴⡤⢸⣤⢁⡀⠀⠇⢀⡎⠠⣀⠎⠀       (  _ \\( \\/ )(  __)            \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡖⠊⠁⠈⠒⠀⠀⠀⠀⠉⠒⠸⣄⡜⠀⢀⠟⠀⠀        ) _ ( )  /  ) _)             \n");
            printf("    ⡠⠖⠒⠢⢤⡀⠀⠀⠀⠀⢠⠁⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢗⡞⠀⠀⠀       (____/(__/  (____)            \n");
            printf("    ⠉⠒⢄⠀⠀⠘⢆⠀⠀⠀⠘⣄⠤⠀⠤⢀⠈⠁⠐⠤⢀⡀⠀⠀⠀⠀⡇⠀⠀⠀                    ____  _  _  ____ \n");
            printf("    ⠀⠀⠀⠛⢄⠀⠈⠓⣄⠀⢸⢠⠀⠀⠑⢄⠈⠢⣀⠀⠀⠈⠁⠢⡀⢠⠃⠀⠀⠀                   (  _ \\( \\/ )(  __)\n");
            printf("    ⠀⠀⠀⠀⠈⢳⠀⠀⠈⠓⠚⠁⠀⠀⠀⠈⡆⠀⠀⠑⠂⠀⠀⠀⠀⢸⠀⠀⠀⠀                    ) _ ( )  /  ) _) \n");
            printf("    ⠀⠀⠀⠀⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⡎⠀⠀⠀⠀                   (____/(__/  (____)\n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠙⢆⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⢠⠇⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠈⢆⠀⠀⠀⠀⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⡸⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢣⡀⠀⠀⠀⢀⡜⠀⠀⠀⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣒⢄⣀⣀⣀⠀⠤⠀⣀⡀⠀⡸⠀⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠉⠉⢠⡶⠀⢠⡶⠀⠀⢠⠁⠀⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠁⠀⠀⠂⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀       \n");
            printf("    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀       \n");

    }


};

int max(int x, int y){

    if(x >= y){

        return x;
    }

    return y;
}

int min(int x, int y){

    if(x <= y){

        return x;
    }

    return y;
}


struct design draw;

int setId;

// For Main Menu
char mainMenu[5] = "*   ";
int curAt = 1;


int getMenuChoice(){

    clear();

    draw.cpms();
    draw.line();


    printf("\n");

    printf("\t\t%c\t\t Add vehicle\t\t  %c\n\n", mainMenu[0], mainMenu[0]);
    printf("\t\t%c\t\tRemove vehicle\t\t  %c\n\n", mainMenu[1], mainMenu[1]);

 
    printf("\t\t%c\t  View all parked vehicles\t  %c\t\n\n", mainMenu[2], mainMenu[2]);
    printf("\t\t%c\t\t    Exit\t\t  %c\n\n", mainMenu[3], mainMenu[3]);

    draw.line();

    printf("\t\tUse keys W and S to navigate and X to select");

    char choice;

    choice = getch();

    clear();

    if(choice == 'x' || choice == 'X'){

        return curAt;
    }

    else if(choice == 'w' || choice == 'W'){

        curAt -= 1;
        curAt = max(curAt, 1);

        mainMenu[0] = ' ';
        mainMenu[1] = ' ';
        mainMenu[2] = ' ';
        mainMenu[3] = ' ';

        mainMenu[curAt - 1] = '*';

        return getMenuChoice();

    }
    else if(choice == 's' || choice == 'S'){

        curAt += 1;
        curAt = min(curAt, 4);

        mainMenu[0] = ' ';
        mainMenu[1] = ' ';
        mainMenu[2] = ' ';
        mainMenu[3] = ' ';

        mainMenu[curAt - 1] = '*';

        return getMenuChoice();
    }

    else{

        return getMenuChoice();
    }

    return choice;

}

int compareString(char s1[20], char s2[20]){

    for(int i = 0; i < 20; ++i){

        if(s1[i] != s2[i]){

            return 0;
        }

        if(s1[i] == '\0'){

            return 0;
        }
    }

    return 1;
}

void viewParkedVehicles(struct parkingLot* pl){

    clear();

    FILE *fp = fopen(fileName, "r");

    if (fp == NULL) {

        printf("Error opening file!\n");
        return;
    }

    printf(" ID\tType\t\tRegistered Name\t\tLicense Plate\n");

    draw.line();

    for(int i = 0; i < pl -> countParked; ++i){

        printf(" %d\t%s\t\t%s\t\t\t%s\n", 
                pl -> parkedVehicles[i].id,
                pl -> parkedVehicles[i].vehicleType,
                pl -> parkedVehicles[i].registeredName,
                pl -> parkedVehicles[i].licensePlate);
        
        draw.line();

    }

    printf("\t\t\tEnter any key to continue!");

    char ch = getch();

    return;
}

// For Vehicle menu

int vehicleAt = 1;

char vehicleMenu[4] = "*  ";

int getVehicleType(){
    clear();

    draw.cpms();
    draw.line();

    printf("\n\t\t      ADD MENU : SELECT TYPE OF VEHICLE\n\n");
    
    printf("   \t\t%c\t  Car (@25 Rs per hour)   \t%c\n\n", vehicleMenu[0], vehicleMenu[0]);
    printf("   \t\t%c\t  Truck (@120 Rs per hour)\t%c\n\n", vehicleMenu[1], vehicleMenu[1]);
    printf("   \t\t%c\t  Bike (@15 Rs per hour)  \t%c\n\n", vehicleMenu[2], vehicleMenu[2]);

    draw.line();

    printf("\t\tUse keys W and S to navigate and X to select");

    char choice;

    choice = getch();

    if(choice == 'x' || choice == 'X'){
        return vehicleAt;
    }

    else if(choice == 'w' || choice == 'W'){

        vehicleAt -= 1;
        vehicleAt = max(vehicleAt, 1);

        vehicleMenu[0] = ' ';
        vehicleMenu[1] = ' ';
        vehicleMenu[2] = ' ';

        vehicleMenu[vehicleAt - 1] = '*';

        return getVehicleType();
    }

    else if(choice == 's' || choice == 'S'){

        vehicleAt += 1;
        vehicleAt = min(vehicleAt, 3);

        vehicleMenu[0] = ' ';
        vehicleMenu[1] = ' ';
        vehicleMenu[2] = ' ';

        vehicleMenu[vehicleAt - 1] = '*';

        return getVehicleType();
    }

    else{

        return getVehicleType();

    }

    return choice;    
}

void addVehicle(struct parkingLot* pl){

    clear();

    draw.cpms();
    draw.line();

    struct vehicle newVehicle;

    newVehicle.id = setId;
    ++setId;

    int tmp = getVehicleType();

    if(tmp == 1){

        strcpy(newVehicle.vehicleType, car);
    }
    else if(tmp == 2){

        strcpy(newVehicle.vehicleType, truck);
    }
    else{

        strcpy(newVehicle.vehicleType, bike);
    }

    clear();

    draw.cpms();
    draw.line();

    printf("\t\t\t    You selected : %s\n", (newVehicle.vehicleType));

    printf("\n\tRegister Name : ");

    scanf("%s", &newVehicle.registeredName);

    printf("\n\tLicense Plate Number : ");

    scanf("%s", &newVehicle.licensePlate);
    
    pl -> parkedVehicles[pl->countParked] = newVehicle;

    pl -> countParked++;

    FILE *fp = fopen(fileName, "a");

    if(fp == NULL){

        printf("Error opening file!\n");

        return;
    }

    fprintf(fp, "%d %s %s %s\n", newVehicle.id, newVehicle.vehicleType, newVehicle.registeredName, newVehicle.licensePlate);
    
    fclose(fp);

    printf("\n\n\n");

    draw.line();

    printf("\tCar parking entry added successfully! Press any key to continue\n");

    char ch;
    ch = getch();

    return;
}

int removeAt = 1;
char removeMenu[3] = "* ";

int getRemove(){

    clear();

    draw.cpms();

    draw.line();

    printf("\n\t\t\t\t REMOVE VIA :- \n\n");

    printf("\t\t%c\t\t  Vehicle ID\t\t%c\n\n", removeMenu[0], removeMenu[0]);
    printf("\t\t%c\t\tVehicle Number\t\t%c\n\n\n\n", removeMenu[1], removeMenu[1]);

    draw.line();

    printf("\t\tUse keys W and S to navigate and X to select");

    char choice;
    choice = getch();

    if(choice == 'x' || choice == 'X'){
        return removeAt;
    }
    else if(choice == 'w' || choice == 'W'){
        removeAt -= 1;
        removeAt = max(removeAt, 1);

        removeMenu[0] = ' ';
        removeMenu[1] = ' ';

        removeMenu[removeAt - 1] = '*';

        return getRemove();

    }
    else if(choice == 's' || choice == 'S'){
        removeAt += 1;
        removeAt = min(removeAt, 2);

        removeMenu[0] = ' ';
        removeMenu[1] = ' ';

        removeMenu[removeAt - 1] = '*';

        return getRemove();
    }
    else{
        return getRemove();
    }

    return choice;    
}

void removeVehicle(struct parkingLot* pl){
    clear();

    int opt = getRemove();
    int vehicleId = -1;

    clear();

    draw.cpms();
    draw.line();

    printf("\n\t\t\t\t VEHICLE REMOVAL \n\n");

    if(opt == 1){
        printf("\t\tEnter Vehicle ID : ");

        int vId;
        scanf("%d", &vId);

        for(int i = 0; i < pl -> countParked; ++i){
            if(vId == pl -> parkedVehicles[i].id){
                vehicleId = i;
                break;
            }
        }
    }
    else{
        printf("\t\tEnter Vehicle Number : ");
        
        char vehicleNumber[20];
        scanf("%s", &vehicleNumber);

        for(int i = 0; i < pl -> countParked; ++i){

            if(strcmp(pl -> parkedVehicles[i].licensePlate, vehicleNumber) == 0){
                vehicleId = i;
                break;
            }
        }
    }

    if(vehicleId == -1){
        printf("No such car parked! Press any key to continue\n");

        char ch = getch();
        return;
    }

    struct vehicle vehicleToRemove = pl -> parkedVehicles[vehicleId];

    for(int i = vehicleId; i < pl -> countParked - 1; ++i){
        pl -> parkedVehicles[i] = pl -> parkedVehicles[i + 1];
    }

    pl -> countParked--;

    // Overwriting the file
    FILE *fp = fopen(fileName, "w");

    if(fp == NULL){
        printf("Error opening file!\n");
        return;
    }

    for(int i = 0; i < pl -> countParked; ++i){

        struct vehicle newVehicle;

        newVehicle.id = pl -> parkedVehicles[i].id;

        strcpy(newVehicle.registeredName, pl -> parkedVehicles[i].registeredName);
        strcpy(newVehicle.licensePlate, pl -> parkedVehicles[i].licensePlate);
        strcpy(newVehicle.vehicleType, pl -> parkedVehicles[i].vehicleType);

        fprintf(fp, "%d %s %s %s\n", newVehicle.id, newVehicle.vehicleType, newVehicle.registeredName, newVehicle.licensePlate);
    }

    fclose(fp);

    printf("\t\tVehicle entry removed! Press any key to continue\n");
    char ch = getch();


    return;
}

void byeBye(){
    clear();

    printf("\n");

    draw.hand();
    draw.line();

    printf("\t\t\t\tHave a nice day!\n");
    return;
}

void invalidChoice(){
    printf("Invalid Choice, please try again\n");
    return;
}

void splashScreen(){

    draw.jiit();
    draw.cpms();

    printf("\t\t\t  Press any key to continue");

    char ch = getch();

    clear();

    return;
}

// char* getTime(){
//     time_t rawtime;
//     struct tm * timeinfo;

//     time ( &rawtime );
//     timeinfo = localtime ( &rawtime );
    
//     return timeinfo;
// }

int main(){

    clear();

    splashScreen();

    struct parkingLot pl;
    setId = 1;

    FILE* fp = fopen(fileName, "r");

    if(fp == NULL){
        printf("Oops, something went wrong\n");
        printf("\tFile Not Found\n");

        return 1;
    }

    // // Read and update our database first

    int i = 0;
    
    while(!feof(fp)){

        int id;
        char vehicleType[20];
        char registeredName[20];
        char licensePlate[20];

        int cnt = fscanf(fp, "%d %s %s %s", &id, &vehicleType, &registeredName, &licensePlate);

        if (cnt != 4) {
            break;
        }

        struct vehicle carToAdd;

        carToAdd.id = id;

        strcpy(carToAdd.registeredName, registeredName);
        strcpy(carToAdd.licensePlate, licensePlate);
        strcpy(carToAdd.vehicleType, vehicleType);

        // printf("%d %s %s %s\n", id, vehicleType, registeredName, licensePlate);

        pl.parkedVehicles[i] = carToAdd;
        pl.countParked++;

        setId = max(setId, id + 1);

        ++i;
    }

    fclose(fp);

    // Done reading and updating


    int choice;

    do{
        choice = getMenuChoice();

        switch(choice){
            case 1:
                addVehicle(&pl);
                break;

            case 2:
                removeVehicle(&pl);
                break;

            case 3:
                viewParkedVehicles(&pl);
                break;
            
            case 4:
                byeBye();
                break;
            
            default:
                invalidChoice();
                break;
        }
    }
    while(choice != 4);

}
