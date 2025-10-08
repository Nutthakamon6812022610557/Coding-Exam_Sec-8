#include<stdio.h>
#include<string.h>
    int i ;
    float claculate_base_fine();
    float calculate_final_fine();

 int main(){
    claculate_base_fine() ;     

 }
 float claculate_base_fine(){
    int num_book ;
    int num_day ;
    char book_type[3] = {'F','A','R'} ;
    int total_day ;
    int all_day[num_day] ;
    printf("*** Library Fine Calcculator ***\n");
    printf ("Enter number of late book(1-10):") ;
    scanf("%d",&num_book) ;                             //รับค่า num_book
    
    if(num_book <= 10){                                 //ถ้า num_book <= 10 ดำเนินการตามเงื่อนไขนี้
    for (int i = 0 ; i < num_book ; i++ )
    {
        printf("Enter late day for book %d:",i+1);
        scanf(" %d",&all_day[i]);                      // รับค่าแล้วเก็บไว้ที่ all_day
        total_day += all_day[i] ;                      // นำ all_day[i] มารวมกันแล้วเก็บค่าไว้ที่ total_day
    }
    printf("Total Late Day: %d\n",total_day);       
    printf("Enter Book Tye(F,A,R):") ;
    scanf(" %c",&book_type[3]) ;
    printf("\n");
    printf("\n");
    
    
    printf("---Fine Summary---\n") ;
    float base ;
    float Total_fine ;

        if (book_type[3] == 'A' ) {                                 //ถ้า book_type[3] = A ให้ใช้เงื่อนไขนี้
            base = 10*total_day ;
            Total_fine = base+((base*15)/100);
        printf("Book Type: Academic(10 THB/day + 15%% fee)\n") ;
        printf("Total Late Day : %d Day\n",total_day) ;
        printf("Total base Fine : %.2f THB\n",base) ;
        printf("Fine Adjustment(Net) : +15.00%%\n") ;
        printf("Final Total Fine : %.2f THB\n",Total_fine) ;

    } else if (book_type[3] == 'F') {                               //ถ้า book_type[3] = F ให้ใช้เงื่อนไขนี้
        base = 5*total_day ;
        Total_fine = base-((base*10)/100);
        printf("Book Type: Fantasy(5 THB/day - 10%% fee)\n") ;
        printf("Total Late Day : %d Day\n",total_day) ;
        printf("Total base Fine : %.2f THB\n",base) ;
        printf("Fine Adjustment(Net) : -10.00%%\n") ;
        printf("Final Total Fine : %.2f THB\n",Total_fine) ;
       
    } else if (book_type[3] == 'R') {                               //ถ้า book_type[3] = R ให้ใช้เงื่อนไขนี้
        if(total_day > 40){                                         //ถ้า book_type[3] = R ให้ใช้เงื่อนไขนี้ แต่หาก total_day > 40 ใช้เงื่อนไขนี้
        base = 25*total_day ;
        Total_fine = base+((base*5)/100);
        printf("Book Type: R(25 THB/day + 5%% fee)\n") ;
        printf("Because total day > 40 day\n") ;
        printf("Total Late Day : %d Day\n",total_day) ;
        printf("Total base Fine : %.2f THB\n",base) ;
        printf("Fine Adjustment(Net) : +5.00%%\n") ;
        printf("Final Total Fine : %.2f THB\n",Total_fine) ;
        }else{                                                   //ถ้า book_type[3] = R แต่หาก total_day < 40 ใช้เงื่อนไขนี้
        base = 25*total_day ;
        Total_fine = base;
        printf("Book Type: R(25 THB/day )\n") ;
        printf("Total Late Day : %d Day\n",total_day) ;
        printf("Total base Fine : %.2f THB\n",base) ;
        printf("Final Total Fine : %.2f THB\n",Total_fine) ;
        }

    } else {                                                    //หากไม่เข้าเงื่อนไข คือ รับค่าที่นอกเหนือจาก A F R ใช้เงื่อนไขนี้
        printf("Invalid \n"); 
    }
}

else{                                                           //หาก num_book มากกว่า 10 ใช้เงื่อนไขนี้
    printf("Invalid \n"); 
}

}
