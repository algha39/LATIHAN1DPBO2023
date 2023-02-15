class ListMhs:
    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""

    def __init__(self, nama = "", nim = "",prodi = "",fakultas = ""):
        self.nama = nama
        self.nim = nim
        self.prodi = prodi
        self.fakultas = fakultas

    def get_nama(self):
        return self.nama
    def get_nim(self):
        return self.nim
    def get_prodi(self):
        return self.prodi
    def get_fakultas(self):
        return self.fakultas

    def set_nama(self, nama):
        self.__nama = nama
    def set_nim(self, nim):
        self.__nim = nim
    def set_prodi(self, prodi):
        self.__prodi = prodi
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas