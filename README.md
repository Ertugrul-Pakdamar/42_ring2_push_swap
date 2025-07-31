# Push Swap 🔄

Bu proje, iki yığını (stack) minimum hamle sayısında sıralamayı amaçlayan bir algoritma projesidir.

## Proje Hakkında 📝

Push Swap, verilen sayı dizisini özel kurallar çerçevesinde sıralamamızı isteyen bir 42 projesidir. İki adet stack (A ve B) kullanarak, belirli komutlarla sayıları sıralamamız gerekiyor.

### Kullanılan Komutlar 🛠️

- `sa` : stack a'nın en üstündeki iki elemanı değiştirir
- `sb` : stack b'nin en üstündeki iki elemanı değiştirir
- `ss` : sa ve sb aynı anda
- `pa` : stack b'nin en üstündeki elemanı stack a'ya taşır
- `pb` : stack a'nın en üstündeki elemanı stack b'ye taşır
- `ra` : stack a'daki tüm elemanları yukarı kaydırır
- `rb` : stack b'deki tüm elemanları yukarı kaydırır
- `rr` : ra ve rb aynı anda
- `rra` : stack a'daki tüm elemanları aşağı kaydırır
- `rrb` : stack b'deki tüm elemanları aşağı kaydırır
- `rrr` : rra ve rrb aynı anda

## Kullanım 💻

```bash
make
./push_swap 5 2 3 1 4
```

### Derleme 🔨

```bash
make        # Programı derler
make clean  # Obje dosyalarını siler
make fclean # Tüm derlenmiş dosyaları siler
make re     # Yeniden derler
```

## Algoritma 🧮

Program, radix sort algoritması kullanarak sayıları sıralamaktadır. Her sayı önce indexlenir, sonra binary formata çevrilir ve bit'lerine göre sıralama yapılır.

## Test Sonuçları 📊

- 3 sayı için: 2-3 hamle
- 5 sayı için: 10-12 hamle
- 100 sayı için: ~700 hamle
- 500 sayı için: ~5500 hamle
