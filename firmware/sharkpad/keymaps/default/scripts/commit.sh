#!/bin/bash
BASE="$HOME/work"

cd "$BASE" || exit

read -p "direktori/proyek: " tujuan

if cd "$tujuan" 2>/dev/null; then
    clear
    echo "berada di: $(pwd)"
    sleep 1.5
    read -p "masukkan pesan commit: " MSG
    echo "----menjalankan git commit----"
    git add .
    git commit -m "$MSG"

    sleep 1
    echo "melakukan push github"

    git push origin main

    sleep 1
    echo "berhasil"
else
    echo "proyek '$tujuan' tidak ditemukan di $(pwd)"
fi