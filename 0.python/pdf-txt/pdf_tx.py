from docx import Document
import pdfplumber
import os
import glob
import PyPDF2

doc = Document()

def spazio():
  print("----------------------------------------")

spazio()
files = glob.glob("*.pdf")
print(files)
spazio()

file = input("Quale file vuoi aprire? -> ") + ".pdf"
read_pdf = PyPDF2.PdfFileReader(file)
pag = read_pdf.getNumPages()
spazio()
type = input("In che formato vuoi il file? word[w] - txt[t]")
pag = int(pag)
with pdfplumber.open(file) as temp:
  for i in range(pag):
    page_pdf = temp.pages[i]
    text_pdf = page_pdf.extract_text()
    spazio()
    open_txt = open("end.txt", "w")
    open_txt.write(text_pdf)
    print("OK, copiato.")
    open_txt.close()

if type == 'w':
  with open("end.txt", 'r') as openfile:
    line = openfile.read()
    doc.add_paragraph(line)
    doc.save(file + ".docx")
  
  os.system(file + ".docx")
else:
  os.system("end.txt")
