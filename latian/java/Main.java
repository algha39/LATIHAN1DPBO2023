import java.util.Scanner;
import java.util.ArrayList;

public class Main{
    public static void main(String[] args){
        ListMhs rian = new ListMhs();

        int i, n = 0;
        String nama;
        String nim;
        String prodi;
        String fakultas;

        ArrayList<ListMhs> list = new ArrayList<>();
        
        System.out.println("Jumlah data input : ");
        Scanner sc = new Scanner(System.in);

        try{
            n = sc.nextInt();
        }catch(Exception e){
            System.out.println("The input is not a integer!");
        }

        for(i = 0; i < n; i++){
            System.out.print("Nama : ");
            nama = sc.next();
            System.out.print("NIM : ");
            nim = sc.next();
            System.out.print("Prodi : ");
            prodi = sc.next();
            System.out.print("Fakultas : ");
            fakultas = sc.next();

            ListMhs temp = new ListMhs();
            temp.setNama(nama); temp.setNim(nim);
            temp.setProdi(prodi); temp.setFakultas(fakultas);
            list.add(temp);
        }

        System.out.println("Data Mahasiswa : ");
        for(i = 0; i < list.size(); i++)
        {
            System.out.println("| " + list.get(i).getNama() + " | " + list.get(i).getNim() + " | " + list.get(i).getProdi() + " | " + list.get(i).getFakultas() + " |");
        }

        sc.close();
    }
}