#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char pasw[20],input_pass[20];
    printf("\t\tWelcome TO Apartment Bill\nIf you want to continue press 1, else anything\n");
    scanf("%d",&k);//press 1 to enter in main code...
    FILE *bill_save,*bill_collect,*pass,*add_info;
    if(k==1){
    char A[2];
    printf("Enter your password:\n");
    pass=fopen("password.txt","r");
    scanf("%c",&A);
    gets(input_pass);
    while(!feof(pass)){
    fgets(pasw,20,pass);
    }
    fclose(pass);
    //password checking
    if(strcmp(pasw,input_pass)==0){
    printf("Wanna add new renter info?\npress 0...\nWanna get bill?\nPress 1...\nWanna save charges?\nPress 2\nWanna change password?\nPress 3\nFor Exit\nPress 4\n");
    scanf("%d",&i);
    if(i==0){//add new people info...
        add_info=fopen("info.txt","a");
        char entry_date[12],nid[19], name_renter[26], mobile[13], education[8],email[34],father[26],permanent_add[250],emargency_name[26],emargency_contact[13],flat_no[15],relation[12],c2,c3;
        int edu;
        printf("Enter Flat no: ");
        scanf("%c",&c2);
        gets(flat_no);
        printf("\n");
        printf("Enter Name: ");
        gets(name_renter);
        printf("\n");
        printf("Enter NID Number: ");
        gets(nid);
        printf("\n");
        printf("Enter Mobile no: ");
        gets(mobile);
        printf("\n");
        printf("Enter Educational qualification: ");
        printf("\nPSC pass press 1\nJSC pass press 3\nSSC pass press 3\nHSC pass press 4\nBSC pass press 5\nMSC pass press 6\nPh.D pass press 7\nPOSTDOC pass press 8\n");
        scanf("%d",&edu);
        if(edu==1){
            strcpy(education,"PSC");
        }
        else if(edu==2){
            strcpy(education,"JSC");
        }
        else if(edu==3){
            strcpy(education,"SSC");
        }
        else if(edu==4){
            strcpy(education,"HSC");
        }
        else if(edu==5){
            strcpy(education,"BSC");
        }
        else if(edu==6){
            strcpy(education,"MSC");
        }
        else if(edu==7){
            strcpy(education,"Ph.D");
        }
        else if(edu==8){
            strcpy(education,"POSTDOC");
        }
        printf("\n");
        printf("Enter email: ");
        scanf("%c",&c3);
        gets(email);
        printf("\n");
        printf("Enter Father name: ");
        gets(father);
        printf("\n");
        printf("Enter permanent Address: ");
        gets(permanent_add);
        printf("\n");
        printf("Enter Emergency contacting person name: ");
        gets(emargency_name);
        printf("\n");
        printf("Enter Emergency contacting person number: ");
        gets(emargency_contact);
        printf("\n");
        printf("Relation with emergency contacting person: ");
        gets(relation);
        printf("\n");
        printf("Entering date: ");
        gets(entry_date);
        printf("\n");
        fprintf(add_info,"Entering date: %s\nFlat no.: %s\nName: %s\nNID no.: %s\nMobile no.: %s\nEducational qualification: %s\nEmail: %s\nFather's Name: %s\nEnter Emergency contacting person name: %s\nEnter Emergency contacting person number: %s\nRelation with emergency contacting person: %s\nPermanent Address: %s\n\n_____________________\t\t\t______________________\n signature of owner\t\t\t signature of renter\n\n\n",entry_date,flat_no,name_renter,nid,mobile,education,email,father,emargency_name,emargency_contact,relation,permanent_add);
    }
    else if(i==1){                           //bill making
        start:
        bill_save=fopen("Vara.txt","a");
        bill_collect=fopen("vara_save.txt","r");
        double other,water,elect,total,bill;
        char month[11],apar[250],c1;
        int year,flat,gas,moyla,bua,night_guard,angina_porishkar,rasta_jharu,caretaker;
        fscanf(bill_collect,"%d%d%d%d%d%d%lf%d",&gas,&moyla,&bua,&night_guard,&angina_porishkar,&rasta_jharu,&other,&caretaker);
        printf("Enter apartment name with full address: ");
        scanf("%c",&c1);
        gets(apar);
       strupr(apar);
        printf("\n");
        printf("Enter total flat number: ");
        scanf("%d",&flat);
        printf("\n");
        printf("Enter this month name: ");
        scanf("%s",month);
        strupr(month);
        printf("\n");
        printf("Enter year: ");
        scanf("%d",&year);
        printf("\n");
        printf("Enter water bill: ");
        scanf("%lf",&water);
        printf("\n");
        printf("Enter electricity bill: ");
        scanf("%lf",&elect);
        printf("\n");
        printf("Enter other charges: ");
        scanf("%lf",&other);
        printf("\n");
        total=(gas*flat)+(moyla*flat)+(bua*flat)+(night_guard*flat)+(angina_porishkar*flat)+(rasta_jharu*flat)+(caretaker*flat)+elect+water+other;
        bill=(total/(flat/1.0));
        if(other)
            fprintf(bill_save,"Welcome to %s\nHere is total %d flat(s)\nIn %s,%d\nGas bill = %d Taka only\nWater bill is = %.2lf Taka only\nElectric bill = %.2lf Taka only\nMoylar bill = %d Taka only\nBuar bill = %d Taka only\nNight guard's bill = %d Taka only\nRasta porishkarer bill = %d Taka only\nAngina porishkar = %d Taka only\nCaretaker's bill = %d Taka only\nOther charge = %.2lf Taka only\n ____________________________\ntotal bill = %.2lf Taka only\nThanks Every one\n\n\t_______________\n\tsignature and date\n\n\n",apar, flat, month, year, gas, (water/flat), (elect/flat), moyla, bua, night_guard,rasta_jharu, angina_porishkar, caretaker, (other/flat), bill);
        else
            fprintf(bill_save,"Welcome to %s\nHere is total %d flat(s)\nIn %s,%d\nGas bill = %d Taka only\nWater bill is = %.2lf Taka only\nElectric bill = %.2lf Taka only\nMoylar bill = %d Taka only\nBuar bill = %d Taka only\nNight guard's bill = %d Taka only\nRasta porishkarer bill = %d Taka only\nAngina porishkar = %d Taka only\nCaretaker's bill = %d Taka only\n ____________________________\ntotal bill = %.2lf Taka only\nThere are no extra charge in this month\nThanks Everyone\n\n\t_______________\n\tsignature and date\n\n\n",apar, flat, month, year, gas, (water/flat), (elect/flat), moyla, bua, night_guard,rasta_jharu, angina_porishkar, caretaker, bill);
    }
    else if(i==2){                      //fixed bill change
        double other,water,elect,total,bill;
        int year,flat,gas,moyla,bua,night_guard,angina_porishkar,rasta_jharu,caretaker;
        bill_collect=fopen("vara_save.txt","w");
        printf("Enter gas bill: ");
        scanf("%d",&gas);
        printf("\n");
        printf("Enter moylar bill: ");
        scanf("%d",&moyla);
        printf("\n");
        printf("Enter bua bill: ");
        scanf("%d",&bua);
        printf("\n");
        printf("Enter night guard's bill: ");
        scanf("%d",&night_guard);
        printf("\n");
        printf("Enter angina porishkarer bill: ");
        scanf("%d",&angina_porishkar);
        printf("\n");
        printf("Enter rasta jharur bill: ");
        scanf("%d",&rasta_jharu);
        printf("\n");
        printf("Enter other bill: ");
        scanf("%lf",&other);
        printf("\n");
        printf("Enter caretaker's bill: ");
        scanf("%d",&caretaker);
        printf("\n");
        fprintf(bill_collect,"%d %d %d %d %d %d %.2lf %d",gas,moyla,bua,night_guard,angina_porishkar,rasta_jharu,other,caretaker);
    }
    else if(i==3){                  //password change
            printf("Enter your password for change.\n");
        gets(pasw);
         pass=fopen("password.txt","w+");

        gets(pasw);
        fputs(pasw,pass);
    }
//    printf("Complete\nwanna continue?press 1\nelse anything: ");
    else if(i==4){              //exit
        return 0;
    }
//if a mistake in bill or want to make a new bill
tictac:
    printf("Notun kore bill korte chaile press 1, naile 1 bade ja iccha press korun\n");
    scanf("%d",&j);
    if(j==1)
        goto start;
    else
        return 0;
}
else{
    printf("Your password is incorrect\nGood Bye\n");
    return 0;
}
}
else
    return 0;
    int l;
    scanf("%d",&l);
    if(l==1)
        goto tictac;
    else
        return 0;
}
