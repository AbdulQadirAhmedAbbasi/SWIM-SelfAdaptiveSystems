require(reshape2)
require(ggplot2)
require(cowplot)
require(scales)
require(RSQLite)
  
basedir <- "./"
vectorDBPath <- paste(basedir, folder, "/", config, "-", run, ".vec", sep="")
vdb <- dbConnect(RSQLite::SQLite(), vectorDBPath)
print(dbListTables(vdb))

#print(dbListFields(vdb, "table_name"))

