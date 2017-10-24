#include <stdio.h>
#include <conio.h>
main()
{
      int jjk,sts;
      float gapok,tsi,galem,ulg,ppn,jumlah,gaji,tot_gaji;
      char nama[20],jab;
      puts("PROGRAM MENGAHITUNG GAJI PT.X");
      puts("____________________________________________________________________");
      printf("nama pegawai                                    :");scanf("%s",nama);fflush(stdin);
      printf("jabatan M=manajer S=supervisor T=staff          :");scanf("%c",&jab);fflush(stdin);
      printf("status marital 1.sudah menikah 0.belum menikah  :");scanf("%d",&sts);fflush(stdin);
      printf("jumlah kerja dalam 1 minggu                     :");scanf("%d",&jjk);fflush(stdin);
      puts("____________________________________________________________________");
      //seleksi gaji
      if (jab == 'm')
      {
              gapok=3000000;
              ulg=50000;
      }
      else if (jab == 's')
      {
           gapok=2000000;
           ulg=30000;
      }
      else
      {
          gapok=1000000;
          ulg=15000;
      }
      //seleksi status
      if (sts == 1)
      {
              tsi=0.2*gapok;
      }
      else
      {
          tsi=0;
      }
      //cek lembur
      if (jjk>=48)
      {
                  galem=(jjk-48)*ulg;
      }
      else
      {
          galem=0;
      }
      //menghitung ppn
      gaji=tsi+gapok; 
      ppn=0.025*gaji;
      jumlah=tsi+gapok+galem;
      tot_gaji=jumlah-ppn;
      
      printf("\nHASIL");
      puts("____________________________________________________________________");
      printf("jumlah jam lembur =%d\n",jjk);
      printf("gaji lembur       =%.2f\n",galem);
      printf("gaji pokok        =%.2f\n",gapok);
      printf("tunjangan suami istri =%.2\n",tsi);
      puts("____________________________________________________________________");
      printf("jumlah gaji           =Rp. %.2f\n",jumlah);
      printf("ppn                   =Rp. %.2f\n",ppn);
      puts("____________________________________________________________________");
      printf("TOTAL GAJI anda adalah Rp. %.2f",tot_gaji);
          
     getch();
}
