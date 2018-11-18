CREATE TABLE `projectinfo_t` (
`id` int(11) NOT NULL,
`name` text NOT NULL,
`describe` text NULL,
PRIMARY KEY (`id`) 
);
CREATE TABLE `log_t` (
`id` int NOT NULL AUTO_INCREMENT,
`subject` text NOT NULL,
`operate` text NOT NULL,
`object` text NULL,
`result` text NULL,
PRIMARY KEY (`id`) 
);
CREATE TABLE `operatetype_t` (
`id` int NOT NULL AUTO_INCREMENT,
`operateName` text NOT NULL,
PRIMARY KEY (`id`) 
);
CREATE TABLE `software_t` (
`id` int NOT NULL AUTO_INCREMENT,
`name` text NOT NULL,
`codename` text NOT NULL,
PRIMARY KEY (`id`) 
);
