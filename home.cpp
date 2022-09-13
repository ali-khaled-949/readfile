void display ()
{
   ifstream in ("sample_input.txt");
   string current="";//always a good Idea to intialize your variables
   
   if (!in){cout <<" text file not found"; exit (1);}
   while (in)
    {
       getline (in, current, '\n');
       cout <<current <<endl;
     }
   
    in.close ();
 }
