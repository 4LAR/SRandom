procedure InitializeComponent;
    begin
        self.vb := new System.Windows.Forms.Button();
        self.kol := new System.Windows.Forms.TextBox();
        self.iskl := new System.Windows.Forms.ListBox();
        self.vnb := new System.Windows.Forms.Button();
        self.dnb := new System.Windows.Forms.Button();
        self.otv := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.checkBox2 := new System.Windows.Forms.CheckBox();
        self.clear := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label4 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // vb
        // 
        self.vb.Location := new System.Drawing.Point(12, 38);
        self.vb.Name := 'vb';
        self.vb.Size := new System.Drawing.Size(240, 58);
        self.vb.TabIndex := 0;
        self.vb.Text := 'выбрать жертву';
        self.vb.UseVisualStyleBackColor := true;
        self.vb.Click += vb_Click;
        // 
        // kol
        // 
        self.kol.Location := new System.Drawing.Point(127, 9);
        self.kol.Name := 'kol';
        self.kol.Size := new System.Drawing.Size(52, 20);
        self.kol.TabIndex := 1;
        self.kol.Text := '2';
        self.kol.TextChanged += kol_TextChanged;
        // 
        // iskl
        // 
        self.iskl.FormattingEnabled := true;
        self.iskl.Location := new System.Drawing.Point(329, 25);
        self.iskl.Name := 'iskl';
        self.iskl.Size := new System.Drawing.Size(67, 108);
        self.iskl.Sorted := true;
        self.iskl.TabIndex := 3;
        self.iskl.SelectedIndexChanged += iskl_SelectedIndexChanged;
        // 
        // vnb
        // 
        self.vnb.Location := new System.Drawing.Point(276, 55);
        self.vnb.Name := 'vnb';
        self.vnb.Size := new System.Drawing.Size(47, 39);
        self.vnb.TabIndex := 4;
        self.vnb.Text := '->';
        self.vnb.UseVisualStyleBackColor := true;
        self.vnb.Click += vnb_Click;
        // 
        // dnb
        // 
        self.dnb.Location := new System.Drawing.Point(276, 94);
        self.dnb.Name := 'dnb';
        self.dnb.Size := new System.Drawing.Size(47, 39);
        self.dnb.TabIndex := 5;
        self.dnb.Text := '<-';
        self.dnb.UseVisualStyleBackColor := true;
        self.dnb.Click += dnb_Click;
        // 
        // otv
        // 
        self.otv.Location := new System.Drawing.Point(127, 101);
        self.otv.Name := 'otv';
        self.otv.Size := new System.Drawing.Size(52, 20);
        self.otv.TabIndex := 7;
        self.otv.TextChanged += otv_TextChanged;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 12);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(109, 20);
        self.label1.TabIndex := 8;
        self.label1.Text := 'Количество жертв:';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(63, 104);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(58, 15);
        self.label2.TabIndex := 9;
        self.label2.Text := 'жертва:';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(329, 5);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(79, 19);
        self.label3.TabIndex := 10;
        self.label3.Text := 'Исключения';
        // 
        // checkBox1
        // 
        self.checkBox1.Location := new System.Drawing.Point(401, 60);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(144, 45);
        self.checkBox1.TabIndex := 11;
        self.checkBox1.Text := 'Автоматически вводить жертв в список исключений'#13#10;
        self.checkBox1.UseVisualStyleBackColor := true;
        self.checkBox1.CheckedChanged += checkBox1_CheckedChanged;
        // 
        // checkBox2
        // 
        self.checkBox2.Enabled := false;
        self.checkBox2.Location := new System.Drawing.Point(402, 101);
        self.checkBox2.Name := 'checkBox2';
        self.checkBox2.Size := new System.Drawing.Size(143, 33);
        self.checkBox2.TabIndex := 12;
        self.checkBox2.Text := 'Анимация выбора жертвы';
        self.checkBox2.UseVisualStyleBackColor := true;
        self.checkBox2.CheckedChanged += checkBox2_CheckedChanged;
        // 
        // clear
        // 
        self.clear.Location := new System.Drawing.Point(276, 31);
        self.clear.Name := 'clear';
        self.clear.Size := new System.Drawing.Size(47, 23);
        self.clear.TabIndex := 13;
        self.clear.Text := 'Clear';
        self.clear.UseVisualStyleBackColor := true;
        self.clear.Click += clear_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(414, 31);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(75, 20);
        self.textBox1.TabIndex := 14;
        self.textBox1.Text := '10Б';
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(414, 9);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(75, 15);
        self.label4.TabIndex := 15;
        self.label4.Text := 'Файл с искл.';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(495, 7);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(39, 23);
        self.button1.TabIndex := 16;
        self.button1.Text := 'open';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(495, 34);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(39, 23);
        self.button2.TabIndex := 17;
        self.button2.Text := 'save';
        self.button2.UseVisualStyleBackColor := true;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(546, 139);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.clear);
        self.Controls.Add(self.checkBox2);
        self.Controls.Add(self.checkBox1);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.otv);
        self.Controls.Add(self.dnb);
        self.Controls.Add(self.vnb);
        self.Controls.Add(self.iskl);
        self.Controls.Add(self.kol);
        self.Controls.Add(self.vb);
        self.MaximumSize := new System.Drawing.Size(562, 177);
        self.MinimumSize := new System.Drawing.Size(562, 177);
        self.Name := 'Form1';
        self.Text := 'SRandom v0.7';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
