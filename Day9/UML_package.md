# Q1 Plant UML でパッケージ図を書くにはどうしたらいいですか。
A1 by Gemini
PlantUMLでパッケージ図（Package Diagram）を作成するのは非常にシンプルです。基本的には `package` キーワードを使って要素をグループ化していきます。

基本的な書き方から、よく使うテクニックまで分かりやすく解説します。

---

## 1. 基本的な書き方

最もシンプルなパッケージ図は、`package` の中にクラスやコンポーネント、あるいは別のパッケージを配置し、それらを矢印（`-->` や `..>`）で繋ぐことで作成できます。

```plantuml
@startuml
package "パブリックAPI" {
    [APIコントローラー]
}

package "ビジネスロジック" {
    [注文サービス]
}

package "データアクセス" {
    [注文リポジトリ]
}

' パッケージ間の依存関係
"パブリックAPI" --> "ビジネスロジック"
"ビジネスロジック" --> "データアクセス"
@enduml

```

---

## 2. パッケージの見た目（スタイル）を変える

PlantUMLでは、パッケージの枠線のデザイン（ステレオタイプ）をいくつか選ぶことができます。用途に合わせて使い分けると、より直感的な図になります。

```plantuml
@startuml
package DefaultPackage {
    [要素1]
}

node NodePackage {
    [要素2]
}

folder FolderPackage {
    [要素3]
}

frame FramePackage {
    [要素4]
}

cloud CloudPackage {
    [要素5]
}

database DatabasePackage {
    [要素6]
}
@enduml

```

* **`package` / `folder**`: 一般的なフォルダ形式の見た目です（デフォルト）。
* **`node`**: インフラ配置図（デプロイ図）などでサーバーなどを表す際によく使います。
* **`frame`**: 外枠だけのシンプルな四角形です。
* **`cloud` / `database**`: クラウドサービスやデータベース群をひとまとめにしたい時に便利です。

---

## 3. パッケージの入れ子（ネスト）

パッケージの中にさらにパッケージを入れることで、階層構造を表現できます。

```plantuml
@startuml
package "基幹システム" {
    
    package "顧客管理サブシステム" {
        [顧客データ]
    }
    
    package "認証サブシステム" {
        [ログイン処理]
    }
    
    "顧客管理サブシステム" .> "認証サブシステム" : 利用
}
@enduml

```

---

## 4. レイアウトを整えるコツ（矢印の方向）

パッケージの配置が思い通りにならない場合は、矢印の記号を使って配置をコントロールできます。

* `-->` : 自動（通常は下方向）
* `-right->` または `->` : 右方向
* `-left->` : 左方向
* `-up->` : 上方向
* `-down->` : 下方向

```plantuml
@startuml
package "A" as a
package "B" as b
package "C" as c

' Aの右にB、Aの下にCを配置する例
a -right-> b
a -down-> c
@enduml

```

※上記のように `as エリアス名` を使うと、依存関係を書くときに日本語の長いパッケージ名を使わずに済むのでコードがすっきりします。

```plantuml

@startuml

package DefaultPackage {


    [A]
    
    [B]
    
    [C]
    
    [D]
}

@enduml
```


<img width="203" height="273" alt="image" src="https://github.com/user-attachments/assets/13999aba-824f-44be-81c0-2e5173ce018c" />



```plantuml
@startuml

package DefaultPackage {

  [A] -->   [B] 

   [C] -->   [D]

}

@enduml
```

<img width="226" height="257" alt="image" src="https://github.com/user-attachments/assets/b7142815-927f-48a9-92f3-0f7ec801fadb" />
