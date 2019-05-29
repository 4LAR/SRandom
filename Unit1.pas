Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure kol_TextChanged(sender: Object; e: EventArgs);
    procedure vb_Click(sender: Object; e: EventArgs);
    procedure vnb_Click(sender: Object; e: EventArgs);
    procedure clear_Click(sender: Object; e: EventArgs);
    procedure dnb_Click(sender: Object; e: EventArgs);
    procedure checkBox1_CheckedChanged(sender: Object; e: EventArgs);
    procedure iskl_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure sort_Click(sender: Object; e: EventArgs);
    procedure otv_TextChanged(sender: Object; e: EventArgs);
    //procedure checkBox3_CheckedChanged(sender: Object; e: EventArgs);
    procedure checkBox2_CheckedChanged(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    vb: Button;
    iskl: ListBox;
    vnb: Button;
    dnb: Button;
    otv: TextBox;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    checkBox1: CheckBox;
    checkBox2: CheckBox;
    clear: Button;
    textBox1: TextBox;
    label4: &Label;
    button1: Button;
    button2: Button;
    kol: TextBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.kol_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.vb_Click(sender: Object; e: EventArgs);
var
  o,i,j,t,s : integer;
begin
  j := strtoint(kol.text);
  {if checkBox2.checked then
    for i := 1 to 10 do
      begin
        o := PABCSystem.random(j);
        otv.Text := inttostr(o+1);
        //delay(100);
        sleep(100);
      end
    else }
  if iskl.Items.Count < j then begin
  if (iskl.Items.Count > 0) then begin
  while true do
    begin
       
      o := PABCSystem.random(j);
      for i := 0 to iskl.Items.Count-1 do
        if (inttostr(o+1) = iskl.Items.item[i].ToString) then 
          begin 
            t := 0; 
            break;
          end else
            t := 1;
        if t = 1 then break;
      end ;
    end else
      o := PABCSystem.random(j);
    otv.Text := inttostr(o+1);
  if checkBox1.checked then
    begin
      iskl.Items.Add(otv.text);
      //iskl.SelectedIndex := iskl.Items.Count - 1;
    end;
  //otv.text := iskl.Items.item[0].ToString;
 end else otv.Text := 'nill';
end;

procedure Form1.vnb_Click(sender: Object; e: EventArgs);
begin
  if (otv.text <> '') and (otv.text <> 'nill') then begin
      iskl.Items.Add(otv.text);
      //iskl.SelectedIndex := iskl.Items.Count - 1;
    end;
end;

procedure Form1.clear_Click(sender: Object; e: EventArgs);
begin
  iskl.Items.Clear
end;

procedure Form1.dnb_Click(sender: Object; e: EventArgs);
begin
  if (iskl.Items.Count > 0) and (iskl.SelectedIndex <> -1) then
    iskl.Items.RemoveAt(iskl.SelectedIndex);
end;

procedure Form1.checkBox1_CheckedChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.iskl_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.sort_Click(sender: Object; e: EventArgs);
const m = 100;
var
  arr: array[1..m] of integer;
  i, j, k: integer;
begin
   for i := 1 to m-1 do
        for j := 1 to m-i do
            if arr[j] > arr[j+1] then begin
                k := arr[j];
                arr[j] := arr[j+1];
                arr[j+1] := k
            end;
            
            
end;

procedure Form1.otv_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.checkBox2_CheckedChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);

begin
  
end;



end.
