Learning Programming
========
# C
 
## 資料結構 Data Structure
### 二元搜尋法(遞迴)
 + binSearch.c:
注意，在index使用上，必須為1開始。否則在整數除法上會出現錯誤。

## 基本觀念 Basic Knowledge
### 函數呼叫成功，回傳True
+ verify_boolean.c:
-如果函數呼叫成功，則會回傳True
 
## 字串處理 String
### 字串處理 atoi
 + atoi.c:
將字串中出現的數字轉為integer型態。

## 巨集 Marco
### MIN 
 + marco_min.c:
巨集應用，寫一個巨集求出兩數最小值。

## 數學 Math
### 質數 
 + prime.c 
判斷一個數字是否為質數。可以注意此程式有使用條件編譯，利用條件編譯可以方便除錯及測試用途。
 
## 指標、記憶體 memory 
### 計算動態配置陣列長度
 + type_length.c:
配置一個int陣列未宣告陣列大小，利用指標計算出陣列長度。**注意!**這程式有使用條件編譯，欲切換請修改#if 使之為1。 
    - 利用指標是指向陣列的第一個位址(在函數傳遞陣列參數也是一樣)，可以得知宣告型態的記憶體大小，接著總長度除以宣告型態大小就可以得知陣列個數。
 
   - 內容包含: int 型態、double 型態、char 型態陣列。(即string)
 
### 指標
 + ptr.c:
練習指標應用，注意該內容裡有sizeof()可以看到配置記憶體大小。以及整數指標可以指向字元指標。
 + swap.c:
pass by value應用，將兩數值交換。因為pass by value，傳遞到副函式時，需要傳遞指標變數。針對記憶體內容做數值交換。
 
# Ruby
 
[Ruby 學習筆記](https://hackpad.com/Ruby--TCOYbywzQJN)
 
## 資料結構 Data Structure
### 陣列 Array
 + array.rb:
二維陣列的宣告以及使用方式，並且使用迭代器列出陣列內容。
 
### 雜湊 Hash
 + histogram.rb:
雜湊表的應用，使用者輸入自串，以空白隔開。並且利用雜湊表儲存分割後的字串以及統計。
    + 利用.sort_by 做排序。
    + 利用.reverse! 做反轉。
 
 + select.rb:
使用.select方法，可以給定搜尋條件(似SQL)來做特定功能。此程式有兩種寫法，給定搜尋條件並且存入另一個Hash變數之中。
    + 利用**.each**方法加上條件搜尋並且一個一個存入Hash。
    + 利用**.select**方法直接將過濾結果存入一個Hash。
 
##  基本觀念 Basic Knowledge
### 函數呼叫成功，回傳Nil
 + verify_boolean.rb:
如果函數呼叫成功，則會回傳Nil
 
## 字串處理 String
### 是否包含子字串、取代子字串
 + substring.rb:
搜尋子字串是否在字串之中，並且取代他。 
 
## 方法 Method
### Splat arguments 多參數傳遞
 + method.rb:
使用 splat 參數傳遞方式來達到多參數傳入method。其中亦有先固定一個參數，再傳入多參數(沒有上限)。
 
## proc 物件
### code block 應用
 + proc.rb:
利用proc將code block存入一個變數，並且呼叫proc變數。此範例可以看到有.collect以及.map方法的使用。
 
## 物件導向 Object-Oriented
### override 
 + override.rb :
一個簡單的繼承、並且帶有初始化練習以及override的應用。
