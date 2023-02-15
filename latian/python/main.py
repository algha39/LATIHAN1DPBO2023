from ListMhs import ListMhs

dfrmhs = []

print("Masukan jumlah data Mahasiswa : ")
n = int(input())
for i in range(n):
    print("Nama : ")
    nama = str(input())
    print("NIM : ")
    nim = str(input())
    print("Prodi : ")
    prodi = str(input())
    print("Fakultas : ")
    fakultas = str(input())

    dfrmhs.append(ListMhs(nama, nim, prodi, fakultas))

i = 0
print("iteration output : ")
for ListMhs in dfrmhs:
    print("| ", ListMhs.get_nama(), " | ", ListMhs.get_nim(), " | ", ListMhs.get_prodi(), " | ", ListMhs.get_fakultas(), " |")
    i += 1