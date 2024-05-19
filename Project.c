#include <stdio.h>
float Ft = 0.9343,pay=0,onp,ofp,MaxDe,par,unit;
int unit_use,type;
float cal_1(int unit){ //ใช้ฟังก์ชัน cal_1 คำนวณค่า pay ของหัวข้อ 1.1.1
    if (unit > 400){ //คำนวณหาค่า pay
        unit_use = unit - 400;  //โดยจะแบ่งการคำนวณค่า pay เป็น 7 ช่วง และบวกค่า pay เพิ่มจากการคำนวณแต่ละช่วง
        pay += unit_use * 4.4217;
        unit -= unit_use;
    }
    if (unit > 150 && unit <= 400){ 
        unit_use = unit - 150;
        pay += unit_use * 4.2218;
        unit -= unit_use;
    }
    if (unit > 100 && unit <= 150){ 
        unit_use = unit - 100;
        pay += unit_use * 3.7171;
        unit -= unit_use;
    }
    if (unit > 35 && unit <= 100){ 
        unit_use = unit - 35;
        pay += unit_use * 3.6237;
        unit -= unit_use;
    }
    if (unit > 25 && unit <= 35){ 
        unit_use = unit - 25;
        pay += unit_use * 3.2405;
        unit -= unit_use;
    }
    if (unit > 15 && unit <= 25){ 
        unit_use = unit - 15;
        pay += unit_use * 2.9882;
        unit -= unit_use;
    }
    if (unit > 0 && unit <= 15){ 
        unit_use = unit;
        pay += unit_use * 2.3488;
    }
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_2(int unit){ //ใช้ฟังก์ชัน cal_2 คำนวณค่า pay ของหัวข้อ 1.1.2
    if (unit > 400){ //คำนวณหาค่า pay
        unit_use = unit - 400; //โดยจะแบ่งการคำนวณค่า pay เป็น 3 ช่วง และบวกค่า pay เพิ่มจากการคำนวณแต่ละช่วง
        pay += unit_use * 4.4217;
        unit -= unit_use;
    }
    if (unit > 150 && unit <= 400){
        unit_use = unit - 150;
        pay += unit_use * 4.2218;
        unit -= unit_use;
    }
    if (unit > 0 && unit <= 150){
        unit_use = unit;
        pay += unit_use * 3.2484;
    }
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_5(int unit){ //ใช้ฟังก์ชัน cal_5 คำนวณค่า pay ของหัวข้อ 2.1.1
    pay = unit * 3.9086; //คำนวณหาค่า pay
    return pay;
} 
float cal_6(int unit){ //ใช้ฟังก์ชัน cal_6 คำนวณค่า pay ของหัวข้อ 2.1.2
    if (unit > 400){ //คำนวณหาค่า pay
        unit_use = unit - 400; //โดยจะแบ่งการคำนวณค่า pay เป็น 3 ช่วง และบวกค่า pay เพิ่มจากการคำนวณแต่ละช่วง
        pay += unit_use * 4.4217;
        unit -= unit_use;
    }
    if (unit > 150 && unit <= 400){
        unit_use = unit - 150;
        pay += unit_use * 4.2218;
        unit -= unit_use;
    }
    if (unit > 0 && unit <= 150){
        unit_use = unit;
        pay += unit_use * 3.2484;
    }
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_7(int onp, int ofp){ //ใช้ฟังก์ชัน cal_7 คำนวณค่า pay ของหัวข้อ 1.2.1 และ 2.2.1
    pay = (onp * 5.1135) + (ofp * 2.6037); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_8(int onp, int ofp){ //ใช้ฟังก์ชัน cal_8 คำนวณค่า pay ของหัวข้อ 1.2.2 และ 2.2.2
    pay = (onp * 5.7982) + (ofp * 2.6369); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_9(int MaxDe, int unit){ //ใช้ฟังก์ชัน cal_9 คำนวณค่า pay ของหัวข้อ 3.1.1
    pay = (MaxDe * 175.70) + (unit * 3.1097); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_10(int MaxDe, int unit){ //ใช้ฟังก์ชัน cal_10 คำนวณค่า pay ของหัวข้อ 3.1.2
    pay = (MaxDe * 196.26) + (unit * 3.1471); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_11(int MaxDe, int unit){ //ใช้ฟังก์ชัน cal_11 คำนวณค่า pay ของหัวข้อ 3.1.3
    pay = (MaxDe * 221.50) + (unit * 3.1751); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_12(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_12 คำนวณค่า pay ของหัวข้อ 3.2.1
    pay = (MaxDe * 74.14) + (onp * 4.1025) + (ofp * 2.5849); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_13(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_13 คำนวณค่า pay ของหัวข้อ 3.2.2
    pay = (MaxDe * 132.93) + (onp * 4.1839) + (ofp * 2.6037); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main 
}
float cal_14(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_14 คำนวณค่า pay ของหัวข้อ 3.2.3
    pay = (MaxDe * 210.00) + (onp * 4.3297) + (ofp * 2.6369); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_15(int onp, int par, int ofp, int unit){ //ใช้ฟังก์ชัน cal_15 คำนวณค่า pay ของหัวข้อ 4.1.1
    pay = (onp * 224.30) + (par * 29.91) + (ofp * 0) + (unit * 3.1097); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_16(int onp, int par, int ofp, int unit){ //ใช้ฟังก์ชัน cal_16 คำนวณค่า pay ของหัวข้อ 4.1.2
    pay = (onp * 285.05) + (par * 58.88) + (ofp * 0) + (unit * 3.1471); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_17(int onp, int par, int ofp, int unit){ //ใช้ฟังก์ชัน cal_17 คำนวณค่า pay ของหัวข้อ 4.1.3
    pay = (onp * 332.71) + (par * 68.22) + (ofp * 0) + (unit * 3.1751); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main 
}
float cal_18(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_18 คำนวณค่า pay ของหัวข้อ 4.2.1
    pay = (MaxDe * 74.14) + (onp * 4.1025) + (ofp * 2.5849); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_19(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_19 คำนวณค่า pay ของหัวข้อ 4.2.2
    pay = (MaxDe * 132.93) + (onp * 4.1839) + (ofp * 2.6037); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_20(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_20 คำนวณค่า pay ของหัวข้อ 4.2.3
    pay = (MaxDe * 210.00) + (onp * 4.3297) + (ofp * 2.6369); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_21(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_21 คำนวณค่า pay ของหัวข้อ 5.1.1 
    pay = (MaxDe * 74.14) + (onp * 4.1025) + (ofp * 2.5849); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_22(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_22 คำนวณค่า pay ของหัวข้อ 5.1.2
    pay = (MaxDe * 132.93) + (onp * 4.1839) + (ofp * 2.6037); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_23(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_23 คำนวณค่า pay ของหัวข้อ 5.1.3
    pay = (MaxDe * 210.00) + (onp * 4.3297) + (ofp * 2.6369); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_24(int MaxDe, int unit){ //ใช้ฟังก์ชัน cal_24 คำนวณค่า pay ของหัวข้อ 5.2.1
    pay = (MaxDe * 220.56) + (unit * 3.1097); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_25(int MaxDe, int unit){ //ใช้ฟังก์ชัน cal_25 คำนวณค่า pay ของหัวข้อ 5.2.2
    pay = (MaxDe * 256.07) + (unit * 3.1471); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_26(int MaxDe, int unit){ //ใช้ฟังก์ชัน cal_26 คำนวณค่า pay ของหัวข้อ 5.2.3
    pay = (MaxDe * 276.64) + (unit * 3.1751); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_27(int unit){ //ใช้ฟังก์ชัน cal_27 คำนวณค่า pay ของหัวข้อ 6.1.1
    pay = unit * 3.4149; //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_28(int unit){ //ใช้ฟังก์ชัน cal_28 คำนวณค่า pay ของหัวข้อ 6.1.2
    pay = unit * 3.5849; //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_29(int unit){ //ใช้ฟังก์ชัน cal_29 คำนวณค่า pay ของหัวข้อ 6.1.3
    if (unit > 10){ //คำนวณหาค่า pay
        unit_use = unit - 10; //โดยจะแบ่งการคำนวณค่า pay เป็น 2 ช่วง และบวกค่า pay เพิ่มจากการคำนวณแต่ละช่วง
        pay += unit_use * 3.8919;
        unit -= unit_use;
    }
    if (unit > 0 && unit <= 10){
        unit_use = unit;
        pay += unit_use * 2.8013;
    }
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_30(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_30 คำนวณค่า pay ของหัวข้อ 6.2.1
    pay = (MaxDe * 74.14) + (onp * 4.1025) + (ofp * 2.5849); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_31(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_31 คำนวณค่า pay ของหัวข้อ 6.2.2 และ 7.2.1
    pay = (MaxDe * 132.93) + (onp * 4.1839) + (ofp * 2.6037); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_32(int MaxDe, int onp, int ofp){ //ใช้ฟังก์ชัน cal_32 คำนวณค่า pay ของหัวข้อ 6.2.3 และ 7.2.2
    pay = (MaxDe * 210.00) + (onp * 4.3297) + (ofp * 2.6369); //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_33(int unit){ //ใช้ฟังก์ชัน cal_33 คำนวณค่า pay ของหัวข้อ 7.1
    if (unit > 100){ //คำนวณหาค่า pay
        unit_use = unit - 100; //โดยจะแบ่งการคำนวณค่า pay เป็น 2 ช่วง และบวกค่า pay เพิ่มจากการคำนวณแต่ละช่วง
        pay += unit_use * 3.2405;
        unit -= unit_use;
    }
    if (unit > 0 && unit <= 100){
        unit_use = unit;
        pay += unit_use * 2.0889;
    }
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
float cal_34(int unit){ //ใช้ฟังก์ชัน cal_34 คำนวณค่า pay ของหัวข้อ 8
    pay = unit * 6.8025; //คำนวณหาค่า pay
    return pay; // return ค่า pay กลับไปยังฟังก์ชัน main
}
int decorate1(int i){ //ใช้ฟังก์ชัน decorate1 ในการตกแต่งหน้าแสดงผล
	int j;
	for(j=0 ; j<=i ; j++){
		printf("=");
	}
}
int decorate2(int i){ //ใช้ฟังก์ชัน decorate2 ในการตกแต่งหน้าแสดงผล
	int j;
	for(j=0 ; j<=i ; j++){
		printf("-");
	}
}
struct result{ //ประกาศ struct เพื่อเก็บข้อมูลแบบโครงสร้าง
	float pay;
	float service;
	float total_base;
	float VaElec;
	float vat;
	float total;
}ans;
float display(float pay,float service,float total_base,float VaElec,float vat,float total){ //ใช้ฟังก์ชั่น display ในการแสดงผลราคา
	printf("Ft = %.4f bath/kwh", Ft); //การปรับอัตราค่าไฟฟ้าโดยอัตโนมัติ (Ft)
	printf("\nSection 1 Base Tariff"); //ส่วนที่ 1 ค่าไฟฟ้าฐาน
    printf("\n\tEnergy Charge : %.2f bath", pay); //ค่าพลังงานไฟฟ้า
    printf("\n\tService Charge : %.2f bath", service); //ค่าบริการ
    printf("\n\tTotal Base Tariff : %.2f bath", total_base); //รวมค่าไฟฟ้าฐาน
    printf("\nSection 2 (Ft) Charge"); //ส่วนที่ 2 ค่าไฟฟ้าผันแปร (Ft)
    printf("\n\tUsed Energy x Ft Rate : %.2f bath", VaElec); //จำนวนพลังงานไฟฟ้า x ค่า Ft
    printf("\nSection 3 Tax 7%"); //ส่วนที่ 3 ค่าภาษีมูลค่าเพิ่ม 7%
    printf("\n\tVAT : %.2f bath", vat); //(ค่าไฟฟ้าฐาน + ค่า Ft) x 7/100
    printf("\nTotal Electricity Charge : %.2f bath", total); //รวมเงินค่าไฟฟ้า
}
float getUnit(){ //ใช้ฟังก์ชัน getUnit รับค่า unit
	printf("Use unit : ");
    scanf("%f", &unit); //รับค่า unit
    return unit; //return ค่า unit กลับไปยังฟังก์ชัน main
}
float getOnp(){ //ใช้ฟังก์ชัน getOnp รับค่า on peak 
	printf("Energy on peak : ");
    scanf("%f", &onp); //รับค่า onp
    return onp; //return ค่า onp กลับไปยังฟังก์ชัน main
}
float getOfp(){ //ใช้ฟังก์ชัน getOfp รับค่า off peak
	printf("Energy off peak : ");
    scanf("%f", &ofp); //รับค่า ofp
    return ofp; //return ค่า ofp กลับไปยังฟังก์ชัน main
}
float getMaxde(){ //ใช้ฟังก์ชัน getMaxde รับค่า max demand
	printf("Energy off peak : ");
    scanf("%f", &MaxDe); //รับค่า MaxDe
    return MaxDe; //return ค่า MaxDe กลับไปยังฟังก์ชัน main
}
float getPar(){ //ใช้ฟังก์ชัน getPar รับค่า partial
	printf("Maximum electrical power demand(Patial) : ");
    scanf("%f", &par); //รับค่า par
    return par; //return ค่า par กลับไปยังฟังก์ชัน main
}
float calpay1(float service){ //ใช้ฟังก์ชัน calpay1 คำนวณค่าไฟฟ้าผันแปร(unit * Ft) และค่าอื่นๆ
	ans.VaElec = unit * Ft;
    ans.total_base = ans.pay + service;
    ans.vat = (ans.VaElec + ans.total_base) * 7 / 100;
    ans.total = ans.VaElec + ans.total_base + ans.vat;
}
float calpay2(float service){ //ใช้ฟังก์ชัน calpay2 คำนวณค่าไฟฟ้าผันแปร((onp+ofp) * Ft) และค่าอื่นๆ
	ans.total_base = ans.pay + ans.service;
    ans.VaElec = (onp + ofp) * Ft;
    ans.vat = (ans.total_base + ans.VaElec) * 7 / 100;
    ans.total = ans.VaElec + ans.total_base + ans.vat;
}
float calpay3(float service){ //ใช้ฟังก์ชัน calpay3 คำนวณค่าไฟฟ้าผันแปร((MaxDe+unit) * Ft) และค่าอื่นๆ
	ans.total_base = ans.pay + ans.service;
    ans.VaElec = (MaxDe + unit) * Ft;
    ans.vat = (ans.total_base + ans.VaElec) * 7 / 100;
    ans.total = ans.VaElec + ans.total_base + ans.vat;
}
float calpay4(float service){ //ใช้ฟังก์ชัน calpay4 คำนวณค่าไฟฟ้าผันแปร((MaxDe+onp+ofp) * Ft) และค่าอื่นๆ
	ans.total_base = ans.pay + ans.service;
    ans.VaElec = (MaxDe + onp + ofp) * Ft;
    ans.vat = (ans.total_base + ans.VaElec) * 7 / 100;
    ans.total = ans.VaElec + ans.total_base + ans.vat;
}
float calpay5(float service){ //ใช้ฟังก์ชัน calpay5 คำนวณค่าไฟฟ้าผันแปร((onp+par+ofp+unit) * Ft) และค่าอื่นๆ
	ans.VaElec = (onp+par+ofp+unit) * Ft;
    ans.total_base = ans.pay + ans.service;
    ans.vat = (ans.VaElec + ans.total_base) * 7 / 100;
    ans.total = ans.VaElec + ans.total_base + ans.vat;
}
getType1(){ //ใช้ฟังก์ชัน getType1 รับค่า type เพื่อเลือกประเภทผู้ใช้(Electric tariff)
	printf("\nElectric tariff (1-2) : ");
    scanf("%d", &type); //รับค่า type
    return type; // return ค่า type กลับไปยังฟังก์ชัน main
}
getType2(){ //ใช้ฟังก์ชัน getType2 รับค่า type เพื่อเลือกประเภทผู้ใช้(Customer Type (1-2))
	printf("\nCustomer Type (1-2) : ");
    scanf("%d", &type); //รับค่า type
    return type; // return ค่า type กลับไปยังฟังก์ชัน main
}
getType3(){ //ใช้ฟังก์ชัน getType2 รับค่า type เพื่อเลือกประเภทผู้ใช้(Customer Type (1-3))
	printf("\nCustomer Type (1-3) : ");
    scanf("%d", &type); //รับค่า type
    return type; // return ค่า type กลับไปยังฟังก์ชัน main
} 
int main(){
    char y;
    decorate1(20);
    printf(" Start Electricity calculation program ");//เริ่มต้นโปรแกรม
    decorate1(20);
    printf("\n");
    do{
    	decorate2(48);
        printf("\n\t1.Residential house \t\t\t|\n\t2.Small business \t\t\t|\n\t3.medium business \t\t\t|\n\t4.Large business \t\t\t|\n\t5.specific business \t\t\t|\n\t6.Non-profit organization \t\t|\n\t7.Pumping water for agriculture \t|\n\t8.Temporary electricity \t\t|\n");//เลือกประเภทผู้ใช้
        decorate2(48);
        printf("\nChoose a user type (1-8) : ");//เลือกเมนู 1-8
        scanf("%d", &type);
        switch (type){
        case 1://ประเภทที่ 1 บ้านอยู่อาศัย
            printf("\t1.Residentail service(Normal tariff/Progressive rate) \n\t2.Residentail service(TOU tariff)");//เลือก 1-2
            type = getType1();//รับค่า type เพื่อเลือก
            switch (type){
            case 1://1.1 อัตราปกติ
                printf("\t1.Normal tariff with consumption not exceeding 150 kWh per month \n\t2.Normal tariff with consumption exceeding 150 kWh per month");//เลือก 1-2
                type = getType2();//
                switch (type){
                case 1://1.1.1 ใช้พลังงานไฟฟ้าไม่เกิน 150 หน่วยต่อเดือน
					unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_1(unit); //เรียกใช้ฟังก์ชัน cal_1 โดยส่งค่า unit
                    ans.service = 8.19; //ค่าบริการ = 8.19 บาท
                    calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2://1.1.2 ใช้พลังงานไฟฟ้าเกิน 150 หน่วยต่อเดือน
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_2(unit); //เรียกใช้ฟังก์ชัน cal_2 โดยส่งค่า unit
                    ans.service = 24.26; //ค่าบริการ = 24.26 บาท
                    calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
					display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            case 2://อัตรา TOU
                printf("\t1.Voltage 22 - 33 kV \n\t2.Voltage below 22 kilovolts");
                type = getType2();
                switch (type){
                case 1://1.2.1 แรงดัน 22 – 33 กิโลโวลท์
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp 
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp 
                    ans.pay = cal_7(onp, ofp); //เรียกใช้ฟังก์ชัน cal_7 โดยส่งค่า onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay2(ans.service); //เรียกใช้ฟังก์ชัน calpay2 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2://1.2.2 แรงดันต่ำกว่า 22 กิโลโวลท์
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp 
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp 
                    ans.pay = cal_8(onp, ofp); //เรียกใช้ฟังก์ชัน cal_8 โดยส่งค่า onp,ofp
                    ans.service = 24.26; //ค่าบริการ = 24.26 บาท
                    calpay2(ans.service); //เรียกใช้ฟังก์ชัน calpay2 โดยส่งค่า ans.service
					display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display                   
					break;
                }
                break;
            }
            break;
        case 2://ประเภทที่ 2 กิจการขนาดเล็ก
            printf("\t1.Small general service(Normal tariff/Progressive rate) \n\t2.Small general service(TOU tariff)");
            type = getType1();
            switch (type){
            case 1://2.1 อัตราปกติ
                printf("\t1.Voltage 22 - 33 kV \n\t2.Voltage below 22 kilovolts");
                type = getType2();
                switch (type){
                case 1://2.1.1 แรงดัน 22 – 33 กิโลโวลท์
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_5(unit); //เรียกใช้ฟังก์ชัน cal_5 โดยส่งค่า unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
                 	display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display 
                    break;
                case 2://2.1.2 แรงดันต่ำกว่า 22 กิโลโวลท์
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_6(unit); //เรียกใช้ฟังก์ชัน cal_6 โดยส่งค่า unit
                    ans.service = 33.29; //ค่าบริการ = 33.29 บาท
                    calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            case 2://อัตรา TOU
                printf("\t1.Voltage 22 - 33 kV \n\t2.Voltage below 22 kilovolts");
                type = getType2();
                switch (type){
                case 1 : //2.2.1 แรงดัน 22 – 33 กิโลโวลท
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_7(onp, ofp); //เรียกใช้ฟังก์ชัน cal_7 โดยส่งค่า onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay2(ans.service); //เรียกใช้ฟังก์ชัน calpay2 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2:// 2.2.2 แรงดันต่ำกว่า 22 กิโลโวลท์
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_8(onp, ofp); //เรียกใช้ฟังก์ชัน cal_8 โดยส่งค่า onp,ofp
                    ans.service = 33.29; //ค่าบริการ = 33.29 บาท
                    calpay2(ans.service); //เรียกใช้ฟังก์ชัน calpay2 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            }
            break;
        case 3://ประเภทที่ 3 กิจการขนาดกลาง
            printf("\t1.Medium general service(Normal tariff/Progressive rate) \n\t2.Medium general service(TOU tariff)");
            type = getType1();
            switch (type){
            case 1://3.1 อัตราปกติ
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1://3.1.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_9(MaxDe, unit); //เรียกใช้ฟังก์ชัน cal_9 โดยส่งค่า MaxDe,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay3(ans.service); //เรียกใช้ฟังก์ชัน calpay3 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2://3.1.2 แรงดัน 22 – 33 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_10(MaxDe, unit); //เรียกใช้ฟังก์ชัน cal_10 โดยส่งค่า MaxDe,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay3(ans.service); //เรียกใช้ฟังก์ชัน calpay3 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3:// 3.1.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_11(MaxDe, unit); //เรียกใช้ฟังก์ชัน cal_11 โดยส่งค่า MaxDe,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay3(ans.service); //เรียกใช้ฟังก์ชัน calpay3 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            case 2://อัตรา TOU
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1://3.2.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp 
                    ans.pay = cal_12(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_12 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2://3.2.2 แรงดัน 22 – 33 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_13(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_13 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3://3.2.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_14(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_14 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service 
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            }
            break;
        case 4://ประเภทที่ 4 กิจการขนาดใหญ่
            printf("\t1.Large general service(TOD tariff) \n\t2.Large general service(TOU tariff)");
            type = getType1();
            switch (type){
            case 1://4.1 อัตราตามช่วงเวลาของวัน (Time of Day Rate : TOD)
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1://4.1.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    par = getPar(); //เรียกใช้ฟังก์ชัน getPar
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_15(onp, par, ofp, unit); //เรียกใช้ฟังก์ชัน cal_15 โดยส่งค่า onp,par,ofp,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay5(ans.service); //เรียกใช้ฟังก์ชัน calpay5 โดยส่งค่า ans.service 
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2://4.1.2 แรงดัน 22 – 33 กิโลโวลท์
                	onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    par = getPar(); //เรียกใช้ฟังก์ชัน getPar
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_16(onp, par, ofp, unit); //เรียกใช้ฟังก์ชัน cal_16 โดยส่งค่า onp,par,ofp,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay5(ans.service); //เรียกใช้ฟังก์ชัน calpay5 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3://4.1.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                	onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    par = getPar(); //เรียกใช้ฟังก์ชัน getPar
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_17(onp, par, ofp, unit); //เรียกใช้ฟังก์ชัน cal_17 โดยส่งค่า onp,par,ofp,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay5(ans.service); //เรียกใช้ฟังก์ชัน calpay5 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            case 2://4.2 อัตราตามช่วงเวลาของการใช้ (Time of Use Rate : TOU)
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1://4.2.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_18(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_18 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2://4.2.2 แรงดัน 22 – 33 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_19(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_19 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3://4.2.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_20(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_20 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            }
            break;
        case 5://ประเภทที่ 5 กิจการเฉพาะอย่าง
            printf("\t1.Specific business service(TOU tariff) \n\t2.Specific business service(Not installed a TOU meter)");
            type = getType1();
            switch (type){
            case 1://5.1 อัตราตามช่วงเวลาของการใช้ (Time of Use Rate : TOU)
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1:// 5.1.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_21(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_21 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2:// 5.1.2 แรงดัน 22 – 33 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_22(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_22 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3://5.1.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_23(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_23 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service 
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            case 2://5.2 อัตราสำหรับผู้ใช้ไฟฟ้าที่ยังไม่ได้ติดตั้งมิเตอร์ TOU
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1:// 5.2.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_24(MaxDe, unit); //เรียกใช้ฟังก์ชัน cal_24 โดยส่งค่า MaxDe,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay3(ans.service); //เรียกใช้ฟังก์ชัน calpay3 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2:// 5.2.2 แรงดัน 22 – 33 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_25(MaxDe, unit); //เรียกใช้ฟังก์ชัน cal_25 โดยส่งค่า MaxDe,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay3(ans.service); //เรียกใช้ฟังก์ชัน calpay3 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3://5.2.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_26(MaxDe, unit); //เรียกใช้ฟังก์ชัน cal_26 โดยส่งค่า MaxDe,unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay3(ans.service); //เรียกใช้ฟังก์ชัน calpay3 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            }
            break;
        case 6://ประเภทที่ 6 องคกรที่ไม่แสวงหากำไร
            printf("\t1.Grovernment institution and non-profit organization(Normal tariff) \n\t2.Grovernment institution and non-profit organization(TOU tariff)");
            type = getType1();
            switch (type){
            case 1://6.1 อัตราปกติ
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1:// 6.1.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_27(unit); //เรียกใช้ฟังก์ชัน cal_27 โดยส่งค่า unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break; 
                case 2://6.1.2 แรงดัน 22 – 33 กิโลโวลท์
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_28(unit); //เรียกใช้ฟังก์ชัน cal_28 โดยส่งค่า unit
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3://6.1.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                    unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                    ans.pay = cal_29(unit); //เรียกใช้ฟังก์ชัน cal_29 โดยส่งค่า unit
                    ans.service = 20.00; //ค่าบริการ = 20.00 บาท
                    calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            case 2://6.2 อัตรา TOU
                printf("\t1.Voltage from 69 kilovolts up \n\t2.Voltage 22 - 33 kV \n\t3.Voltage below 22 kV");
                type = getType3();
                switch (type){
                case 1:// 6.2.1 แรงดันตั้งแต่ 69 กิโลโวลท์ขึ้นไป
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_30(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_30 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2://6.2.2 แรงดัน 22 – 33 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_31(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_31 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 3:// 6.2.3 แรงดันต่ำกว่า 22 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_32(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_32 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 312.24; //ค่าบริการ = 312.24 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            }
            break;
        case 7://ประเภทที่ 7 สูบน้ำเพื่อการเกษตร
            printf("\t1.Water pumping for agricultural purposes(Normal tariff) \n\t2.Water pumping for agricultural purposes(TOU tariff)");
            type = getType1();
            switch (type){
            case 1://7.1 อัตราปกติ
                unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
                ans.pay = cal_33(unit); //เรียกใช้ฟังก์ชัน cal_33 โดยส่งค่า unit
                ans.service = 115.16; //ค่าบริการ = 115.16 บาท
                calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
                display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                break; 
            case 2://อัตรา TOU
                printf("\t1.Voltage 22 - 33 kV \n\t2.Voltage below 22 kV");
                type = getType2();
                switch (type){
                case 1:// 7.2.1 แรงดัน 22 – 33 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_31(MaxDe, onp, ofp);  //เรียกใช้ฟังก์ชัน cal_31 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 204.07; //ค่าบริการ = 204.07 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                case 2:// 7.2.2 แรงดันต่ำกว่า 22 กิโลโวลท์
                    MaxDe = getMaxde(); //เรียกใช้ฟังก์ชัน getMaxde
                    onp = getOnp(); //เรียกใช้ฟังก์ชัน getOnp
                    ofp = getOfp(); //เรียกใช้ฟังก์ชัน getOfp
                    ans.pay = cal_32(MaxDe, onp, ofp); //เรียกใช้ฟังก์ชัน cal_32 โดยส่งค่า MaxDe,onp,ofp
                    ans.service = 204.07; //ค่าบริการ = 204.07 บาท
                    calpay4(ans.service); //เรียกใช้ฟังก์ชัน calpay4 โดยส่งค่า ans.service
                    display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
                    break;
                }
                break;
            }
            break;
        case 8://ประเภทที่ 8 ไฟฟ้าชั่วคราว
            unit = getUnit(); //เรียกใช้ฟังก์ชัน getUnit
            ans.pay = cal_34(unit); //เรียกใช้ฟังก์ชัน cal_34 โดยส่งค่า unit
            calpay1(ans.service); //เรียกใช้ฟังก์ชัน calpay1 โดยส่งค่า ans.service
            display(ans.pay,ans.service,ans.total_base,ans.VaElec,ans.vat,ans.total); //เรียกใช้ฟังก์ชัน display
            break;
        }
        if(type > 8 || type < 1){ //ถ้าเลือกประเภทนอกเหนือจาก 1-8 จะให้ผู้ใช้เลือกว่าจะคำนวณอีกครั้งหรือไม่
        	printf("***This option is not available***");
		}
        printf("\nProcess again? (Y/N) : "); //คำนวณอีกครั้งหรือไม่
        scanf(" %c", &y); //รับค่า y
    } while (y == 'Y' || y == 'y'); //หากต้องการคำนวณอีกครั้งให้ป้อน y หรือ Y แต่ถ้าไม่ต้องการคำนวณอีกครั้งให้ป้อนอักขระอื่น
    decorate1(20);
    printf(" End Electricity calculation program "); //จบการทำงานของโปรแกรม
    decorate1(20);
}